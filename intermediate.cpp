/*
 * Course: C++ Programming: Intermediate Concepts
 * Completion Time: 1.7 hr, 29 October 2025.
 * Code written by Charles Underwood
 * Compiled using GCC: g++ intermediate.cpp -o intermediate
 * Using the course structure, I wrote my own code.
 */

// Libraries
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

// Addition function
int addition (int a, int b);

// Recursive average function
int average(int a, int b);

// Main function
int main () {

    /*
    // Pointers
    double pi = M_PI;
    double radi[4] = {1.0, 2.0, 4.0, 8.0};
    double circumference[sizeof(radi)];

    for (int i = 0; i < 4; i++) {
        circumference[i] = pi * pow(radi[i],2.0);
        cout << circumference[i] << endl;
    }

    double* cir_ptr = &circumference[0];

    cout << cir_ptr << endl;
    */

    // Create variables
    int a = 12;
    int b = 12;

    // create and open file
    ofstream variablesFile("variable.txt");

    // Write to file
    variablesFile << to_string(a) << endl;

    // Close the file
    variablesFile.close();

    // output variables
    string file_a;
    int read_a;

    // Read from file
    ifstream readvarFile("variable.txt");

    // Read line by line
    while (getline (readvarFile, file_a) ) {
        read_a = stoi(file_a);
    }

    // Close the file
    readvarFile.close();

    int result = average(read_a, b);
    cout << "result: " << result << endl;

    // Run if successful.
    return 0;

}

// Addition function
int addition (int a, int b) {
    int result = a + b;
    return result;
}

// Recursive Average function
int average(int a, int b) {
    int result = addition(a, b)/2;
    return result;
}
