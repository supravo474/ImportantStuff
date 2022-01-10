#include <bits/stdc++.h>
using namespace std;
// function for volume of cube
double volume(double a){
   return (a * a * a);
}
//function for surface area of cube
double area(double a){
   return (6 * a * a);
}
int main(){
   double a = 3;
   cout<< "Volume of cube is: "<<volume(a)<<endl;
   cout<< "Total surface area of cube is "<<area(a);
   return 0;
}
