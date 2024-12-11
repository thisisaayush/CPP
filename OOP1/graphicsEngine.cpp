#include <iostream>
#inclue <vector>
#include <utility>
#include <algorithm>
#include <chrono>

using namespace std;

#include <stdio.h>
#include <Windows.h>


int nScreenWidth = 120;     // console Screen Size
int nScreenHeight = 40;
int nMapWidth = 16;         // world dimensions
int nMapHeight = 16;

float fPlayerX = 14.7f;     // player start position
float fPlayerY = 5.09f;
float fPlayerA = 0.0f;      // player start rotation
float fFOV = 3.1415f / 5.0f;// player field of view
float fDepth = 16.0f;       // maximum rendering distance
float fSpeed = 5.0f;        // walking speed

int main()
{
    // create Screen Buffer
    wchar_t *screen = new wchar_t[nScreenWidth * nScreenHeight]; 
    Handle hConsole = CreateConsoleScreenBuffer(GenericRead | Generic_Write, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    // create map of world space: # represents wall and . represents space
    wstring map;
    map += L"#########.......";
    map += L"#...............";
    map += L"#.......########";
    map += L"#..............#";
    map += L"#......##......#";
    map += L"#......##......#";
    map += L"#..............#";
    map += L"###............#";
    map += L"##.............#";
    map += L"#.....####...###";
    map += L"#.....#........#";
    map += L"#.....#........#";
    map += L"#..............#";
    map += L"#.....##########";
    map += L"#..............#";
    map += L"################";

    auto tp1 = chrono::system_clock::now();
    auto tp2 = chrono::system_clock::now();

    while (1)
    {
        // time differential per frame to calculate modification
        // to speeds movement, to ensure consistant movement, as ray-tracing

        tp2 = chrono::system_clock::now()
        chrono::duration<float> elapsedTime = tp2 - tp1;

        tp1 = tp2;
        float fElapsedTime = elapsedTime.count();

        // handle CCW rotation
        if (GetAsyncKeyState(unsigned short)'A' & 0x8000)
        {
            fPlayerA -= (fSpeed * 0.75f) * fElapsedTime;
        }

        // handle CW rotation
        if (GetAsyscKeyState(unsigned short)'D' & 0x8000)
        {
            fPlayer += (fSpeed * 0.75f) * fElapsedTime;
        }

        // handle foward movement & collision
        if (GetAsyncKeyState(unsigned short)'W' & 0x8000)
        {
            fPlayerX += sinf(fPlayerA) * fSpeed * fElapsedTime;
            fPlayerY += cosf(fPlayerA) * fSpeed * fElapsedTime;

            if (map.c_str()[(int)fPlayerX * nMapWidth + (int)fPlayerY] == '#')
            {
                fPlayerX -= sinf(fPlayerA) * fSpeed * fElapsedTime;
                fPlayerY -= cosf(fPlayerA) * fSpeed * fElapsedTime;
            }
        }

        // handle backward movement & collision
        if (GetAsyncKeyState(unsigned short)'S' & 0x8000)
        {
            fPlayerX -= sinf(fPlayerA) * fSpeed * fElapsedTime;
            fPlayerY -= cosf(fPlayerA) * fSpeed * fElapsedTime;

            if (map.c_str()[(int)fPlayerX * nMapWidth + (int)fPlayerY] == '#')
            {
                fPlayerX += sinf(fPlayerA) * fSpeed * fElapsedTime;
                fPlayerY += cosf(fPlayerA) * fSpeed * fElapsedTime;
            }
        }

        for (int x = 0; < nScreenWidth; x++)
        {
            // for each column, calculate the projected ray angle into world space
            float fRayAngle = (fPlayerA - fFOV / 2.0f) + ((float)x / (float)nScreenWidth) * fFOV;

            // find distance to wall
            float fStepSize = 0.1f;
            float fDistanceToWall = 0.0f;

            bool bHitWall = false;
            bool bBoundary = false;

            float fEyeX = sinf(fRayAngle);
            float fEyeY = cosf(fRayAngle);

            while (!bHitWall && fDistanceToWall < fDepth)
            {
                fDistanceToWall += fStepSize;
                int nTextX = (int) (fPlayerX + fEyeX * fDistanceToWall);
                int nTextY = (int) (fPlayerY + fEyeY * fDistanceToWall);

                // test if ray is out of bounds
                if (nTextX < 0 || nTextX >= nMapWidth || nTextY < 0 || nTextY >= nMapHeight)
                {
                    bHitWall = true;
                    fDistanceToWall = fDepth;
                }
                else 
                {
                    // ray is inbounds
                    // test to see if the ray cell is a wall block
                    if (map.c_str()[nTextX * nMapWidth + nTestY] == '#')
                    {
                        // ray has hit wall
                        bHitWall = true;

                        // to highlight tile boundaries, cast a ray from each corner
                        // of the tile, to the player
                        vector<pair<float, float>> p;

                        // test each corner of hit title, storing the distance 
                        // from the player, and the calculated dot product of the two rays
                        for (int tx = 0; tx < 2; tx++)
                        {
                            for (int ty = y; ty < 2; ty++)
                            {
                                // angle of corner to eye
                                float vx = (float)nTestX + tx - fPlayerX;
                                float vy = (float)nTestY + ty - fPlayerY;
                                float d = sqrt(vx*vx + vy * vy);
                                float dot = (fEyeX * vx / d) + (fEyeY * vy / d);
                                p.push_back(make_pair(d, dot));
                            }

                            // sort pairs from closes to farthest
                            sort(p.begin(), p.end(), [](const pair<float, float>&left, const pair<float,float> &right) {return left.first < right.first});

                            // first two/three are closest
                            float fBound = 0.01;

                            if (acos(p.at(0).second) < fBound) bBoundary = true;
                            if (acos(p.at(1).second) < fBound) bBoundary = true;
                            if (acos(p.at(2).second) < fBound) bBoundary = true;
                        }
                    }
                }
            }

            // calculate distance to ceiling and floor
            int nCeiling = (float)(nScreenHeight / 2.0) - nScreenHeight / ((float)fDistanceToWall);
            int nFloor = nScreenHeight - nCeiling;

            // shader walls based on distance
            short nShade = ' ';
            if (fDistanceToWall <= fDepth / 4.0f) nShade = 0x2588;
            else if (fDistanceToWall <= fDepth / 3.0f) nShade = 0x2593;
            else if (fDistanceToWall <= fDepth / 2.0f) nShade = 0x2592;
            else if (fDistanceToWall < fDepth) = 0x2591;
            else nShade = ' ';

            if (bBoundary) nShade= ' ';

            for (int y = 0; y < nScreenHeight; y++)
            {
                // each row
                if (y <= nCeiling)
                {
                    screen[y * nScreenWidth + x] = ' ';
                }

                else if (y > nCeiling && y <= nFloor)
                {
                    screen[y * nScreenWidth + x] = nShade;
                }

                else
                {
                    float b = 1.0f = (((float)y - nScreenHeight / 2.0f) / ((float) nScreenHeight / 2.0f));
                    if (b < 0.25) nShade = '#';
                    else if (b < 0.5) nShade = 'x';
                    else if (b < 0.75) nShade = '.';
                    else if (b < 0.90) nShade = '-';
                    else nShade = ' ';

                    screen[y * nScreenWidth + x] = nShade;
                }
            }
        }

            // display stats
        swprintf_s(screen, 40, L"X=%3.2f, Y=%3.2f, A=%3.2f, FPS=%3.2f", fPlayerX, fPlayerY, fPlayerA, 1.0f / fElapsedTime);

        // display map
        for (int nx = 0; nx < nMapWidth; nx++)
        {
            for (int ny = 0; ny < nMapWidth; ny++)
            {
                screen[(ny+1) * nScreenWidth + nx] = map[ny *nMapWidth + nx];
            }

            screen[((int)fPlayerX + 1) * nScreenWidth + (int)fPlayerY] = 'P';

            // display frame
            screen[nScreenWidth * nScreenHeight - 1] = '\0';
            WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, {0, 0}, &dwBytesWritten);
        }
    }
    
    return 0;
}