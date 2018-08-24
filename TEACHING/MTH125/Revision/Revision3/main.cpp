#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

float exponential_approximation(double x, double epsilon)
{
    double partSum=1.0;
    int n=1;
    double approx=1.0;
    while(fabs(partSum)>epsilon)
    {
        partSum=partSum*x/n;
        approx+=partSum;
        n++;
    }
    return approx;
}

float cosine_approximation(double x, double epsilon)
{
    long double partSum=1.0;
    int n=1;
    long double approx=1.0;

    while(fabs(partSum)>epsilon)
    {

        partSum=partSum*(-1)*x*x/(2*n*(2*n-1));
        approx+=partSum;
        n++;
    }
    return approx;

}

int main()
{
    //cout<<exponential_approximation(1,0.000001)<<endl;
    cout<<cosine_approximation(M_PI,0.000001)<<endl;
    return 0;
}
