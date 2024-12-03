#include<iostream>
using namespace std;

int main(){
    int integ;
    int evecount = 0;
    int oddcount = 0;

    do {
    cout << "Enter an integer: ";
    cin >> integ;

    if (integ != 0) {
            if (integ % 2 == 0) {
                evecount++;
            } else {
                oddcount++;
            }
        }
    } while (integ != 0);

    cout << "#Even numbers = \n" << evecount;
    cout << "#Odd numbers = "  << oddcount;


    return 0;
}

