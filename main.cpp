#include <iostream>
#include "primeCalculator.h"

using namespace std;
int counter = 0;

int main()
{
    while (counter < 100) {
        int value;
        cout << "Enter a number to check if it is prime: ";
        cin >> value;

        if (value <= 1) {
            cout << value << " is technically not prime.\n\n";
        }
        else {
            primeClass run;
            if (run.primeCalculator(value) == true) {
                cout << value << " is prime.\n\n";
            }
            else {
                cout << value << " is not prime.\n\n";
            }
        }
    }
}