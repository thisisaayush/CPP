#include <iostream>
#include "Array.hpp"

using namespace std;

int main()
{
    Array array;

    // Print days_in_year
    cout << "Days in a year: " << array.days_in_year << endl;

    // Print test_scores
    cout << "Test Scores: ";
    for (int score : array.test_scores)
    {
        cout << score << " ";
    }
    cout << endl;

    // Print high_score_per_level
    cout << "High Scores Per Level: ";
    for (int score : array.high_score_per_level)
    {
        cout << score << " ";
    }
    cout << endl;

    // Print hi_temperature
    cout << "High Temperatures: ";
    for (double temp : array.hi_temperature)
    {
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}
