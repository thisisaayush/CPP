#include "Array.hpp"

// Constructor: Initialize const member and optionally other members
Array::Array()
    : days_in_year(365.25) // Initialize the const member
{
    // Initialize dynamic arrays if needed
    test_scores = {90, 85, 78};          // Example values
    high_score_per_level = {100, 200};  // Example values
    hi_temperature = {98.6, 99.4};      // Example values
}

// Destructor: Clean up resources (if needed)
Array::~Array()
{
    // No manual cleanup required since we're using std::vector
}
