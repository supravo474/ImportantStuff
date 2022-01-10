#include <iostream>
#include <math.h>

using namespace std;
 
int main() {

    float principal, rate, time, result;

    cout << "Enter principal : ";
    cin >> principal;

    cout << endl << "Enter rate : ";
    cin >> rate;

    cout << endl << "Enter time (year) : ";
    cin >> time;

    // Calculate compound interest 
    result = principal * pow((1 + rate / 100), time);

    cout << endl << "Compound interest : " << result;

    return 0;
}