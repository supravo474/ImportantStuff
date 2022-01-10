#include<iostream>
using namespace std;

// function declaration
double calculateInterest(double p, double t, double r);

// main function
int main()
{
  // declare variables
  double p, t, r, interest;

  // take input from end-user
  cout << "Enter principal amount, time and rate:";
  cin >> p >> t >> r;

  // calculate interest
  interest = calculateInterest(p, t, r);

  // display result
  cout << "Interest = " << interest << endl;

  return 0;
}

// function to calculate interest value
double calculateInterest(double p, double t, double r)

{
  double a = (p*t*r)/10
    return (p*t*r)/100;
}
