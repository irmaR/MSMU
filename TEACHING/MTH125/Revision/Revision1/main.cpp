#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int question_1()
{
    float r=0.0;
    int a,b,c=0;
    float x,y=0.0;

    cout<<"Please provide r parameter: ";
    cin>>r;
    cout<<"a = "<<pow(r,2)<<endl;

    cout<<"Provide variables a, b, c to calculate s = a^2 + b^2 + c^2: ";
    cin>>a>>b>>c;
    cout<<"s = "<<pow(a,2)+pow(b,2)+pow(c,2)<<endl;

    cout<<"Provide x and y: ";
    cin>>x>>y;
    cout<<"w = "<<(pow(x-y,2)-(x+y))/32<<endl;
    return 0;

}

void question_2()
{
    int i=2;
    int j=3;
    cout<<i/j<<endl;
    cout<<(i+5.0)/j<<endl;   //----> add this one
    cout<<i%j<<endl;
    cout<<(j-i)/(j+i)<<endl;
    cout<<i-j*2<<endl;
}

void question_3()
{
    float r=1.0;
    cout<<"Program for calculating circle area.\n Input the radius: ";
    cin>>r;
    cout<<"Circle area = "<<M_PI*pow(r,2);
}

void question4()
{
/*
Book 2.20: Write a program that reads an integer and breaks it into a sequence of individual
digits. For example, the input 16384 is displayed as
1 6 3 8 4
You may assume that the input has no more than five digits and is not negative.
*/
int num;

cout<<"Input up to 5 digit non-negative number";
cin>>num;
cout<<num/10000<<" "<<(num%10000)/1000<<" "<<(num%1000) / 100<<" "<<(num%100) / 10<<" "<<(num%10) / 1;
}



int main()
{
    //question_1();
    //question_2();
    //question_3();
    //question_4();
    return 0;
}
