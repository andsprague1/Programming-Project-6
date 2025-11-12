// Programming Project 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


const double G = 9.81;//

double distanceOverTime(int);
double pow(double, int);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "The distance after falling " << i
            << " seconds is" << distanceOverTime(i)<<endl;
    }


    return 0;
}
double distanceOverTime(int t)
{
    double distance;
    distance = pow(.5 * G * t,2);
    return distance;
}
double pow(double oper, int exp)
{
    double s = oper;
    for (int i = 0; i < exp; i++)
    {
        s = s * oper;
    }
    return oper;
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
