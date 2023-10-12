
#include <iostream>
#include <cstdlib>
using namespace std;

// funct prototypes
void Range();
void Range(int lower, int upper);
void Range(int lower, int upper, int divisor);
void DispVal(int val);

// main
int main() {
    int lower, upper, divisor;
    
    while (true) {
        cout << "Enter an integer lower and upper boundaries and divisor of the range separated by white space: ";
    
        cin >> lower >> upper >> divisor;
    
        cout << endl;
        cout << endl;

        if (lower > upper) {
            cout << "Lower number is greater than upper. Exiting..." << endl;
            exit(1);
        } else {
            break; 
        }
    }

    Range(); // call range funct (no arg.)
    cout << endl << endl;

    Range(lower, upper); // call range funct w/ upper & lower arguments
    cout << endl << endl;

    Range(lower, upper, divisor); // call range funct w/ upper, lower, & divisor arguments
    cout << endl;   

    return 0;
}

// no arguments #'s 1 - 25
void Range() {
    cout << "Calling the Range function with no arguments" << endl;
    for(int i = 1; i <= 25; ++i) {
        if(i % 2 == 0) {
            DispVal(i);
        }
    }
}

// even #'s within lowest - highest range
void Range(int lower, int upper) {
    cout << "Calling the Range function with upper & lower arguments" << endl;
    for(int i = lower; i <= upper; ++i) {
        if(i % 2 == 0) {
            DispVal(i);
        }
    }
}

// upper, lower, & divisor arg
void Range(int lower, int upper, int divisor) {
    cout << "Calling the Range function with upper, lower, & divisor arguments" << endl;
    for (int i = lower; i <= upper; i++) {
        if (i % divisor == 0) {
            DispVal(i);
        }
    }
}

// space between
void DispVal(int val) {
    cout << val << " ";
}
