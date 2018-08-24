#include <iostream>

using namespace std;


int global_var=1000;

int some_function(int a)
{
    int global_var=2;
    return global_var*a;

}

/*  The purpose of this program is to call three functions and return their values *?

/**
   This function computes f1(x)=(1+x^2)/(1+3x^3)
   @param x  the input variable
   @ return  the function value
*/
double f1(double x)
{
   return (1. + x*x)/(1. + 3 * pow(x,3));
}

/**
   This function computes f2(x)=(e^x sinx)^4
   @param x  the input variable
   @ return  the fucntion value
*/
double f2(double x)
{
   return pow(exp(x) * sin(x), 4);
}

/**
   This function computes f3(x)=sqrt(2x) if x >= 0 or f3(x)=sqrt(-x) if x < 0
   @param x  the input value
   @return  the function value
*/
double f3(double x)
{
   if (x < 0)
   {
      return sqrt(-x);
   }
   else
   {
      return sqrt(2. * x);
   }
}


int main()
{
    cout<<some_function(2)<<endl;
    cout<<global_var;

   double input;
   cout << "Please enter a value to be inputted in three facuntions: ";
   cin >> input;
   cout << "The value of f1 = " << f1(input) << endl;
   cout << "The value of f2 = " << f2(input) << endl;
   cout << "The value of f3 = " << f3(input) << endl;

    return 0;
}
