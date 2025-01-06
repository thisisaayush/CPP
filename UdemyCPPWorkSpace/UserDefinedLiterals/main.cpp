#include <iostream>

// Define a user-defined literal that converts kilometers to meters
constexpr long double operator"" _km(long double km) 
{
    return km * 1000;  // Convert kilometers to meters
}

int main() 
{
    // Using the user-defined literal _km
    long double distance_in_meters = 5.0_km;  // 5 kilometers = 5000 meters
    
    std::cout << "Distance in meters: " << distance_in_meters << std::endl;
    
    // Using another example with an integer literal
    long double distance_in_meters2 = 3.0_km;  // 3 kilometers = 3000 meters
    
    std::cout << "Distance in meters: " << distance_in_meters2 << std::endl;

    return 0;
}
