#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
QUESTIONS:
35.  Define a vector of integers that contains the first five prime numbers (2, 3, 5, 7,
and 11). Use push_back to add the elements.
36.  Answer Self Check 35 without using push_back.
37.  What is the contents of the vector names after the following statements?
vector<string> names;
names.push_back("Ann");
names.push_back("Bob");
names.pop_back();
names.push_back("Cal");
38.  Suppose you want to store a set of temperature measurements that is taken every
five minutes. Should you use a vector or an array?
39.  Suppose you want to store the names of the weekdays. Should you use a vector
or an array of seven strings?
40.  Write the header for a function that appends two vectors, yielding a third vector.
Do not implement the function.
41.  Consider this partially completed function that appends the elements of one
vector to another.
void append(vector<double>__ target, vector<double>__ source)
{
for (int i = 0; i < source.size(); i++)
{
target.push_back(source[i]);
}
}
Specify whether the parameters should be value or reference parameters.*/


void question35()
{
   vector<int> primes;
   primes.push_back(2);
   primes.push_back(3);
   primes.push_back(5);
   primes.push_back(7);
   primes.push_back(11);
   for(int e:primes)
   {
        cout << " " << e;
   }
}

void question36()
{
   vector<int> primes(5); //Have to mention size here if push_back is not used!
   primes[0]=2;
   primes[1]=3;
   primes[2]=5;
   primes[3]=7;
   primes[4]=11;
   for(int e:primes)
   {
        cout << " " << e;
   }
}

void question37()
{
    vector<string> names;
    names.push_back("Ann");
    names.push_back("Bob");
    names.pop_back();
    names.push_back("Cal");
    for(string e:names)
   {
        cout << " " << e;
   }
}

vector<int> question40(vector<int> vec1,vector<int> vec2)
{
    vector<int> result=vec1;
    for(int el:vec2)
    {
        result.push_back(el);
    }
    for(int e:result)
    {
        cout << " " << e;
    }
    return result;
}

int main()
{
    //question35();
    //question36();
    //question37();
    vector<int> v1={1,2,3};
    vector<int> v2={4,5,6};
    question40(v1,v2); //implemented anways :)

}
