#include<iostream>
using namespace std;
int main()
{
  float cel, far;
  cout<<"Enter temp. in Fahrenheit: ";
  cin>>far;
  cel = (far - 32) * 5/9;
  cout<<"Temp. in Celsius: "<<cel;
  return 0;
}
