/*Write a program that lets the user enter a charge account number. The program should
determine if the number is valid by checking for it in the following list:

5658845, 4520125, 7895122, 8777541, 8451288, 1302850,
8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
1005231, 654231, 3852085, 7576651, 7881200, 4581002

The list of numbers above should be initialized in a single-dimensional array. A simple linear
search should be used to locate the number entered by the user. If the user enters a number that
is in the array, the program should display a message saying the number is valid. If he user
enters a number that is not in the array, the program should display a message indicating that the
number is invalid.

Modify the program to perform a binary search. Use the selection sort algorithm to sort the array
before the binary search is performed.

*/
#include <iostream>
#include "prototype.h"
using namespace std;

int main()
{

    const int SIZE = 18;
    int charge[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451288, 1302850,
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                        1005231, 654231, 3852085, 7576651, 7881200, 4581002};
    int value;
    int position;

    selectionSort(charge, SIZE);

    cout << "Enter the account number that you would like to charge: ";
    cin >> value;

    //position = linearSearch(charge, SIZE, value);
    position = binarySearch(charge, SIZE, value);

    if (position == -1)
        cout << "Error: The account number you entered does not exist. \n";
        else
            cout << "The account number you entered is valid. \n";
}
