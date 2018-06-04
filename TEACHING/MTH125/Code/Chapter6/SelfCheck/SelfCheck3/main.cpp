#include <iostream>

using namespace std;


double sum(double arr[],int current_size)
{
    double sum=0;
    for(int i=0; i<current_size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

void square(int res[],int n)
{
    for(int i=1;i<=n;i++)
    {
        res[i-1]=i*i;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
}

int find_elem(int arr[], int current_size,int elem){
    int pos=-1;
    bool found=false;
    for(int i=0;i<current_size && !found;i++){
        if(arr[i]==elem){
            found=true;
            pos=i;
        }
    }
    return pos;
}

void read_inputs(double inputs[], int &current_size, int capacity)
{
    cout << "Please enter values, Q to quit:" << endl;
    bool more = true;
    while (more)
    {
        double input;
        cin >> input;
        if (cin.fail())
        {
            more = false;
        }
        else if (current_size < capacity)
        {
            inputs[current_size] = input;
            current_size++;
        }
    }
    cout<<inputs[0];
    for(int i=1;i<current_size;i++){
      cout<<", "<<inputs[i];
    }
}

int main()
{
    const int CAPACITY=20;
    int values[CAPACITY]={1,2,3,4,5};
    //double result = sum(values,10);
    //square(values,5);
    //cout<<find_elem(values,5,10)<<endl;
    double values1[CAPACITY];
    int current_size=0;
    read_inputs(values1,current_size,CAPACITY);

}
