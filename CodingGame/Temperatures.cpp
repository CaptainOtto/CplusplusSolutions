#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;


int getLowestNumberOfVector(std::vector<int> inVectorOfNumbers) {
    int output = INT_MAX;
    bool b_PositiveNumberFound = false;

    for (int num : inVectorOfNumbers) {
        if (std::abs(num) < std::abs(output) || (std::abs(num) == std::abs(output) && num > 0)) {
            output = num;
            b_PositiveNumberFound = (num > 0);
        }
    }

    return output;
}

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();

    std::vector<int> temperatures;
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        temperatures.push_back(t);
    }

    int temperatureClosestToZero = temperatures.size() > 0 ? getLowestNumberOfVector(temperatures) : 0;

    cout << temperatureClosestToZero << endl;
}

