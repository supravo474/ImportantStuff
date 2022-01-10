#include <iostream>


int main()
{
    // p is initial principle
    double p;
    // i is interest rate
    double i = 0.99;
    // n is number of years invested
    int n;
    // a is final amount
    double a;

    std::cout << "Please enter the principal amount: ";
    std::cin >> p;
    std::cout << "Please enter the number of years invested: ";
    std::cin >> n;
    a = p;
    for (int k=0; k<n; ++k) {
      a *= 1+i;
    }

    std::cout << a;

}
