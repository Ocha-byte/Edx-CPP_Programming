/*
 * Standard Template Library Example.
 * Completion Time: 1 hr, 29 October 2025.
 * Code written by Charles Underwood
 * Compiled using GCC: g++ stl.cpp -o stl
 * Following https://www.w3schools.com/cpp/cpp_data_structures.asp
 * Creating my own code.
 */

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
using namespace std;

int main () {
    vector<string> tiers = {"Ryzen 3", "Ryzen 5", "Ryzen 7"};
    list<string> uarch = {"Zen", "Zen+", "Zen 3", "Zen 4", "Zen 5"};
    stack<string> series;
    queue<string> next_series;
    deque<string> future_series;
    set<int> gen;
    map<string, int> series_gen;

    // Print vector elements
    for (string tier : tiers) {
        cout << tier << endl;
    }

    cout << "The latest generation uses " << uarch.back()  << "." << endl;

    // When Zen 6 comes out.
    uarch.push_back("Zen 6");
    cout << "The next generation will be " << uarch.back() << "." << endl;
    uarch.pop_back();

    cout << "There are currently " << uarch.size() << " generations of the Zen micro-architecture." << endl;

    // Push to stack
    series.push("1000");
    series.push("3000");
    series.push("5000");
    series.push("7000");
    series.push("9000");

    cout << "There are currently " << series.size() << " series of AMD processors." << endl;

    // Before Ryzen 11,000 comes out
    next_series.push("11,000");
    cout << "The next series will be the " << next_series.front() << " series." << endl;
    //next_series.pop();

    // Future releases
    future_series = {"13,000", "15,000"};
    cout << "After the " << next_series.front() << " series, the " << future_series[0] << " and " << future_series[1] << " series will come out." << endl;

    // Zen Generation
    gen = {1, 2, 3, 4, 5};
    cout << "From oldest to latest: " << endl;
    for (int num: gen) {
        cout << num << endl;
    }

    // Map of AMD Series with their Zen generation.
    series_gen = { {"Zen", 1}, {"Zen+", 2}, {"Zen 2", 3}, {"Zen 2", 4}, {"Zen 3", 5}, {"Zen 3", 6}, {"Zen 4", 7}, {"Zen 4", 8}, {"Zen 5", 9} };
    cout << "The Zen 3 micro-architecture is used by the " << series_gen["Zen 3"]  << "000 series." << endl;

}
