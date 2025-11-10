// Programming Project 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
//Northeast,Southeast, Northwest, and Southwest)
enum {
    NORTHEAST,
    SOUTHEAST,
    NORTHWEST,
    SOUTHWEST
};

double getInput();
int compareDivisions(double,double,double,double);
void outputDivisionName(int);

int main()
{
    cout << NORTHEAST;
    cout << SOUTHEAST;
    double div1Money, div2Money, div3Money, div4Money;

    cout << "Please enter the dollar amount for Div 1\n";
    div1Money= getInput();
    cout << "Please enter the dollar amount for Div 2\n";
    div2Money = getInput();
    cout << "Please enter the dollar amount for Div 3\n";
    div3Money = getInput();
    cout << "Please enter the dollar amount for Div 4\n";
    div4Money = getInput();

    int bestDivion = compareDivisions(div1Money, div2Money, div3Money, div4Money);

    outputDivisionName(bestDivion);

    return 0;
}

/// <summary>
/// Validates input
/// </summary>
/// <returns>valid user input</returns>
double getInput()
{
    double dollars;

    cin >> dollars;
    while (dollars <= 0)
    {
        cout << "It must be greatr than 0";
        cin >> dollars;
    }
    return dollars;

}
/// <summary>
/// louiatrlkbeg
/// </summary>
/// <param name="d1"></param>
/// <param name="d2"></param>
/// <param name="d3"></param>
/// <param name="d4"></param>
/// <returns></returns>
int compareDivisions(double d1, double d2, double d3, double d4)
{
    if (d1 > d2 && d1 > d3 && d1 > d4)
        return NORTHEAST;

    else if (d2 > d1 && d2 > d3 && d2 > d4)
        return SOUTHEAST;
    else if (d3 > d1 && d3 > d2 && d3 > d4)
        return NORTHWEST;
    else if (d4 > d1 && d4 > d3 && d4 > d2)
        return SOUTHEAST;


    return -1;
}

void outputDivisionName(int divThatOne)
{
    if (divThatOne == NORTHEAST)
    {
        cout << "NorthEast Won";
    }
    else if (divThatOne == SOUTHEAST)
    {
        cout << "SouthEast Won";
    }
}
