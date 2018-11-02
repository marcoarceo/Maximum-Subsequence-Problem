#include "Functions.h"

int main(void)
{
    Functions Analysis;
    int option = 0, file = 0;
    bool flag = true;

    while (flag) // Runs the program as long as the user doesnt exit
    {
        do // Runs a loop as long as the user doesnt choose 12
        {
            option = Analysis.determineOption(); // Gathers the option from the user (input size, runs a menu)
            switch (option) // Runs the program depending on the users option
            {
            case 1: // Runs the input size of 8
            {
                for (int file = 1; file < 11; file++) // Runs a loop so that all 10 files are executed
                {
                    cout << "\nInput Size 8: " << endl; // Displays the size of the input file
                    if ((file == 1))
                    {
                        Analysis.readFile("input_8_0.txt"); // Runs the analysis
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_8_1.txt"); // Runs analysis --> this continues for each case below
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_8_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_8_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_8_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_8_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_8_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_8_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_8_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_8_9.txt");
                    }
                }
                Analysis.displayTotalTime(); // This displays the total time and the average time per algorithm
                break;
            } // Everything below this point is the same as the code above
            case 2:
            {
               for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 16: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_16_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_16_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_16_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_16_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_16_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_16_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_16_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_16_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_16_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_16_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 3:
            { // Exit Program
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 32: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_32_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_32_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_32_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_32_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_32_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_32_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_32_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_32_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_32_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_32_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 4:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 64: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_64_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_64_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_64_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_64_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_64_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_64_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_64_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_64_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_64_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_64_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 5:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 128: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_128_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_128_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_128_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_128_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_128_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_128_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_128_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_128_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_128_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_128_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 6:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 256: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_256_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_256_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_256_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_256_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_256_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_256_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_256_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_256_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_256_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_256_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 7:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 512: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_512_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_512_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_512_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_512_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_512_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_512_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_512_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_512_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_512_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_512_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 8:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 1024: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_1024_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_1024_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_1024_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_1024_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_1024_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_1024_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_1024_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_1024_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_1024_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_1024_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 9:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 2048: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_2048_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_2048_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_2048_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_2048_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_2048_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_2048_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_2048_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_2048_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_2048_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_2048_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 10:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 4096: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_4096_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_4096_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_4096_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_4096_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_4096_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_4096_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_4096_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_4096_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_4096_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_4096_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 11:
            {
                for (int file = 1; file < 11; file++)
                {
                    cout << "\nInput Size 8192: " << endl;
                    if ((file == 1))
                    {
                        Analysis.readFile("input_8192_0.txt");
                    }
                    else if ((file == 2))
                    {
                        Analysis.readFile("input_8192_1.txt");
                    }
                    else if ((file == 3))
                    {
                        Analysis.readFile("input_8192_2.txt");
                    }
                    else if ((file == 4))
                    {
                        Analysis.readFile("input_8192_3.txt");
                    }
                    else if ((file == 5))
                    {
                        Analysis.readFile("input_8192_4.txt");
                    }
                    else if ((file == 6))
                    {
                        Analysis.readFile("input_8192_5.txt");
                    }
                    else if ((file == 7))
                    {
                        Analysis.readFile("input_8192_6.txt");
                    }
                    else if ((file == 8))
                    {
                        Analysis.readFile("input_8192_7.txt");
                    }
                    else if ((file == 9))
                    {
                        Analysis.readFile("input_8192_8.txt");
                    }
                    else if ((file == 10))
                    {
                        Analysis.readFile("input_8192_9.txt");
                    }
                }
                Analysis.displayTotalTime();
                break;
            }
            case 12:
            {
                flag = false;
                break;
            }
            }
            }
            while (option > 0 && option < 12);
        }
    }

    // Create a switch/case statement with a menu for the user to select a specific
    // input size for the program that way it becomes easier to specify the input size
    // and to run 10 files at once