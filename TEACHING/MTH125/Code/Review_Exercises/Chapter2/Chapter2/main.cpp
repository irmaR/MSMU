#include <iostream>
#include <cmath>

using namespace std;


void exercise2_20()
{
/*
Write a program that reads an integer and breaks it into a sequence of individual
digits. For example, the input 16384 is displayed as
1 6 3 8 4
You may assume that the input has no more than five digits and is not negative.
*/
int num;

cout<<"Please input up to 5 digit non-negative number";
cin>>num;
cout<<num/10000<<" "<<(num%10000)/1000<<" "<<(num%1000) / 100<<" "<<(num%100) / 10<<" "<<(num%10) / 1;
}

int main()
{
    //exercise2_20();
    cout<<2-3*1;
    return 0;
}
