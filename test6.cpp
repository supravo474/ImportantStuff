#include<iostream>

using namespace std;

int main(){
  int a,b = 0,i,k;
  cout<<"How many numbers do you want to enter"<<endl;
  cin>>a;
  cout<<"Enter "<<a<<" numbers"<<endl;
  for(i=0;i<a;i++){
    cin>>k;
    b = b+k;
  }
  cout<<"Sum of all "<<a<<" numbers is: "<<endl;
  cout<<b<<endl;

  return 0;
}
