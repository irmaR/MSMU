#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}


float approximate_exponential(int x, float epsilon)
{
    float partSum=1.0;
    float approximation=1.0;
    int n=1;
    while(fabs(partSum)>epsilon)
    {
        //partSum=pow(x,n)/factorial(n);
        partSum=partSum*x/n;
        approximation+=partSum;
        n++;
    }

}






int main()
{
    cout<<"Exponential approximation is: "<<approximate_exponential(2,0.0000001)<<endl;
    return 0;
}
