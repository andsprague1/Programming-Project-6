// Programming Project 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

void getCostAndMarkup(double&, int&);
int displayPrice(double);
bool getQuit();

int main()
{

    bool contin=true;
    while (contin)
    {
        double cost;
        int percentMarkup;
        getCostAndMarkup(cost, percentMarkup);
        double retail = cost * (1 + (percentMarkup / 100.0));

        displayPrice(retail);

        contin = getQuit();
    }

    return 0;
}

/// <summary>
/// The purpose of this function is to get the cost and markup
/// </summary>
/// <param name="cost">The cost of the product</param>
/// <param name="markup">The markup on the product</param>
void getCostAndMarkup(double& cost, int& markup)
{
    cout << "Please enter the cost of the product:";
    cin >> cost;
    cout << "Please enter the markup of the product:";
    cin >> markup;
}

/// <summary>
/// This function should display the price of the product
/// </summary>
/// <param name="price">The price to display</param>
/// <returns>error codes
/// 0 is good
/// 1 is negative price
/// 2 is impossible I'm coding for that</returns>
int displayPrice(double price)
{
    if (price < 0)
    {
        cout << "Error";
        return 1;
    }

    cout<< "The retail price is:" << price<<"$" << endl;

    return 0;
}

/// <summary>
/// Check to see if the user wants to continue
/// </summary>
/// <returns>True for continue, False for quit</returns>
bool getQuit()
{
    char c;

    cout << "Do you want to continue (y/n)";
    cin >> c;

    if (c == 'y')
    {
        return true;
    }
    else
    {
        return false;
    }

}
