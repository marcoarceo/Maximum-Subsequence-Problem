#include "Functions.h"

// Allows for these variables to be used to store the time inside the struct
runTime max1;
runTime max2;
runTime maxs3;
runTime max4;

int Functions::maxSubSum1(const vector<int> &a)
{ // This code was given from the PA2 webpage
    auto start = high_resolution_clock::now(); // Starts the timer
    int maxSum = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = i; j < a.size(); ++j)
        {
            int thisSum = 0;
            for (int k = i; k <= j; ++k)
            {
                thisSum += a[k];
            }
            if (thisSum > maxSum)
            {
                maxSum = thisSum;
            }
        }
    }
    auto finish = high_resolution_clock::now(); // Stops the timer
    auto duration = duration_cast<nanoseconds>(finish - start); // Gathers the total time
    cout << "MaxSubSum1 Duration: " << duration.count() << " nanoseconds" << endl; // Displays the time
    cout << "Final Result: " << maxSum << endl; // DIsplays the final result
    max1.execution += duration.count(); // Adds the total time to the struct
    return maxSum; // returns the maximum
}

int Functions::maxSubSum2(const vector<int> &a)
{ // code was given
    auto start = high_resolution_clock::now(); // starts the timer
    int maxSum = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        int thisSum = 0;
        for (int j = i; j < a.size(); ++j)
        {
            thisSum += a[j];
            if (thisSum > maxSum)
            {
                maxSum = thisSum;
            }
        }
    }
    auto finish = high_resolution_clock::now(); // stops the timer
    auto duration = duration_cast<nanoseconds>(finish - start); // gathers the time
    cout << "MaxSubSum2 Duration: " << duration.count() << " nanoseconds" << endl; // displays the time
    cout << "Final Result: " << maxSum << endl; // displays the max
    max2.execution += duration.count(); // sends the time to the struct
    return maxSum;
}

int Functions::maxSumRec(const vector<int> &a, int left, int right)
{ // code was given
    if (left == right)
    {
        if (a[left] > 0)
        {
            return a[left];
        }
        else
        {
            return 0;
        }
    }

    int center = (left + right) / 2;
    int maxLeftSum = maxSumRec(a, left, center);
    int maxRightSum = maxSumRec(a, center + 1, right);

    int maxLeftBorderSum = 0, leftBorderSum = 0;
    for (int i = center; i >= left; --i)
    {
        leftBorderSum += a[i];
        if (leftBorderSum > maxLeftBorderSum)
        {
            maxLeftBorderSum = leftBorderSum;
        }
    }

    int maxRightBorderSum = 0, rightBorderSum = 0;
    for (int j = center + 1; j <= right; ++j)
    {
        rightBorderSum += a[j];
        if (rightBorderSum > maxRightBorderSum)
        {
            maxRightBorderSum = rightBorderSum;
        }
    }

    return max3(maxLeftSum, maxRightSum, maxLeftBorderSum + maxRightBorderSum);
}

int Functions::maxSubSum3(const vector<int> &a)
{ // code was given
    return maxSumRec(a, 0, a.size() - 1);
}

int Functions::max3(int left, int right, int both)
{
    if (left > right && left > both) // compares if left is bigger than both sides
    {
        return left;
    }
    else if (right > left && right > both) // f right is bigger than both sides
    {
        return right;
    }
    else // both is bigger than left and right
    {
        return both;
    }
}

int Functions::maxSubSum4(const vector<int> &a)
{
    auto start = high_resolution_clock::now(); // starts timer
    int maxSum = 0, thisSum = 0;
    for (int j = 0; j < a.size(); ++j)
    {
        thisSum += a[j];
        if (thisSum > maxSum)
        {
            maxSum = thisSum;
        }
        else if (thisSum < 0)
        {
            thisSum = 0;
        }
    }
    auto finish = high_resolution_clock::now(); // stops timer
    auto duration = duration_cast<nanoseconds>(finish - start); // gets total time
    cout << "MaxSubSum4 Duration: " << duration.count() << " nanoseconds" << endl; // displays the time
    cout << "Final Result: " << maxSum << endl; // displays the max
    max4.execution += duration.count(); // sends the time to the struct
    return maxSum;
}

void Functions::readFile(const string &file)
{
    vector<int> numbers; // creates a vector
    ifstream input; // creates the file
    input.open(file); // opens the file

    if (input) // checks if file is valid
    {
        int value = 0;
        while (input >> value)
        {
            numbers.push_back(value); // inserts the values into the vector
        }
    }
    runAnalysis(numbers); // runs the analysis
    numbers.clear(); // clears the vector after the analysis
    input.close(); // closes the file
}

void Functions::runAnalysis(const vector<int> &a)
{
    maxSubSum1(a); // runs algorithm 1
    maxSubSum2(a); // runs algorithm 2
    auto start = high_resolution_clock::now(); // starts timer
    int max = maxSubSum3(a); // runs algorithm 3
    auto stop = high_resolution_clock::now(); // stops timer
    auto duration = duration_cast<nanoseconds>(stop - start); // gathers time
    cout << "MaxSubSum3 Duration: " << duration.count() << " nanoseconds" << endl; // displays time
    maxs3.execution = duration.count(); // sets time to struct
    cout << "Final Result: " << max << endl; // displays max
    maxSubSum4(a); // runs algorithm 4
}

void Functions::displayTotalTime()
{
    cout << "\nTotal MaxSubSum1 time: " << static_cast<double>(max1.execution / 1000) << " microseconds" << endl; // converts the nanoseconds to microseconds
    cout << "Total MaxSubSum2 time: " << static_cast<double>(max2.execution / 1000) << " microseconds" << endl; // makes the program display in double instead of integer
    cout << "Total MaxSubSum3 time: " << static_cast<double>(maxs3.execution / 1000) << " microseconds" << endl;
    cout << "Total MaxSubSum4 time: " << static_cast<double>(max4.execution / 1000) << " microseconds" << endl << endl;

    cout << "Average MaxSubSum1 time: " << static_cast<double>(max1.execution / 1000) / 10 << " microseconds" << endl;
    cout << "Average MaxSubSum2 time: " << static_cast<double>(max2.execution / 1000) / 10 << " microseconds" << endl;
    cout << "Average MaxSubSum3 time: " << static_cast<double>(maxs3.execution / 1000) / 10 << " microseconds" << endl;
    cout << "Average MaxSubSum4 time: " << static_cast<double>(max4.execution / 1000) / 10 << " microseconds" << endl << endl;

// sets the struct back to 0
    max1.execution = 0;
    max2.execution = 0;
    maxs3.execution = 0;
    max4.execution = 0;
}

void Functions::displayMenu()
{ // Displays the options for the user to choose
    cout << "1.) Run Input Size 8 Analysis" << endl;
    cout << "2.) Run Input Size 16 Analysis" << endl;
    cout << "3.) Run Input Size 32 Analysis" << endl;
    cout << "4.) Run Input Size 64 Analysis" << endl;
    cout << "5.) Run Input Size 128 Analysis" << endl;
    cout << "6.) Run Input Size 256 Analysis" << endl;
    cout << "7.) Run Input Size 512 Analysis" << endl;
    cout << "8.) Run Input Size 1024 Analysis" << endl;
    cout << "9.) Run Input Size 2048 Analysis" << endl;
    cout << "10.) Run Input Size 4096 Analysis" << endl;
    cout << "11.) Run Input Size 8192 Analysis" << endl;
    cout << "12.) Close the program" << endl;
}

int Functions::getOption()
{ // Gathers the users choice
    int option = 0, status = 0;
    cout << "\nEnter your option: ";
    cin >> option;
    status = option;
    if ((status = 0))
    {
        cout << "Failed at reading the option" << endl;
    }
    return option;
}

int Functions::determineOption()
{ // Determines if the option is valid, if not, the program asks again
    int option = 0;

    do
    {
        displayMenu();
        option = getOption();
    } while ((option < 1) || (option > 12));
    return option;
}