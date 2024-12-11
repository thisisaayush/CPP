#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <vector> // For using std::vector
using namespace std;

class Array
{
public:
    vector<int> test_scores;         // Dynamic array for test scores
    vector<int> high_score_per_level; // Dynamic array for high scores
    const double days_in_year;           // Constant that must be initialized
    vector<double> hi_temperature;  // Dynamic array for temperatures

    Array();   // Constructor
    ~Array();  // Destructor
};

#endif // ARRAY_HPP
