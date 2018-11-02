#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Opens libraries for use
#include <iostream>
#include <chrono>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
using namespace std::chrono; // Allows to gather time

struct runTime // Creates a structure to save the times
{
     int execution = 0;
};

extern runTime max1; // Makes the variable global for use inside Functions.cpp
extern runTime max2;
extern runTime maxs3;
extern runTime max4;

class Functions
{
    public:
    int maxSubSum1(const vector<int> &a); // First algorithm
    int maxSubSum2(const vector<int> &a); // Second Algorithm
    int maxSubSum3(const vector<int> &a); // Third Algorithm
    int maxSubSum4(const vector<int> &a); // Fourth Algorithm
    void readFile(const string &file); // Reads the file and inserts the contents into a vector
    void displayTotalTime(); // Displays the time for each algorithm
    void displayMenu(); // Displays the menu for the user
    int getOption(); // Gets he options from the user
    int determineOption(); // Determines if the option is valid for the program to run
    void runAnalysis(const vector<int> &a); // Runs the overall analysis

    private: 
    int maxSumRec(const vector<int> & a, int left, int right); // Recursive portion for the third algorithm
    int max3(int left, int right, int both); // Completes the portion needed for maxSumRec()
};
#endif