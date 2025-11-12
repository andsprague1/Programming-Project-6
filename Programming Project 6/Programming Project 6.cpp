// Programming Project 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

bool validate(int);
double finalAverage(int, int, int);

int main()
{
    ifstream inFile;
    inFile.open("scores.txt");
    int score, lowest, total = 0, count = 1;
    inFile >> score;
    if (validate(score) == false)
    {
        cout << "Error score invalid for value " << score<<endl;
        exit(-1);
    }
    lowest = score;
    total = score;
    while (inFile >> score)
    {
        if (validate(score) == false)
        {
            cout << "Error score invalid for value " << score << endl;
            exit(-1);
        }
        total += score;
        if (score < lowest)
        {
            lowest = score;
        }
        count++;

    }

    inFile.close();

    double finalScore = finalAverage(total, lowest, count);
    cout << "Your final score was " << finalScore;
    return 0;
}

/// <summary>
/// Validates Score
/// </summary>
/// <param name="score"></param>
/// <returns></returns>
bool validate(int score)
{
    return (score >= 0 && score <= 100);
}

double finalAverage(int total, int lowest, int num)
{
    double droppedTotal = total - lowest;
    return droppedTotal / (num - 1);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
