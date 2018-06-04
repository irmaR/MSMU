#include <iostream>
using namespace std;


void clear_cin()
{
    while (cin.get() != '\n') //have to use this one to clear the buffer
        {
            continue;
        }
}

void get_the_largest_element(){
    const int CAPACITY = 1000;
    double values[CAPACITY];
    int current_size = 0;

    cout << "Please enter values, Q to quit:" << endl;
    double input;
    while (cin >> input)
    {
        if (current_size < CAPACITY)
        {
            values[current_size] = input;
            current_size++;
        }
    }

    double largest = values[0];
    for (int i = 1; i < current_size; i++)
    {
        if (values[i] > largest)
        {
            largest = values[i];
        }
    }

    for (int i = 0; i < current_size; i++)
    {
        cout << values[i];
        if (values[i] == largest)
        {
            cout << " <== largest value";
        }
        cout << endl;
    }
    clear_cin();
}

void get_the_largest_element2(){
    const int CAPACITY = 1000;
    double values[CAPACITY];
    int current_size = 0;

    cout << "Please enter values, Q to quit:" << endl;
    double input;
    while (cin >> input)
    {
        if (current_size < CAPACITY)
        {
            values[current_size] = input;
            current_size++;
        }
    }

    double largest = 0;
    for (int i = 0; i < current_size; i++)
    {
        if (values[i] > largest)
        {
            largest = values[i];
        }
    }

    for (int i = 0; i < current_size; i++)
    {
        cout << values[i];
        if (values[i] == largest)
        {
            cout << " <== largest value";
        }
        cout << endl;
    }
    clear_cin();
}


void question2(){
    const int CAPACITY = 1000;
    double values[CAPACITY];
    int current_size = 0;
    int number_of_zeros=0;
    cout << "Question 2: Please enter values, Q to quit:" << endl;
    double input;
    while (cin >> input)
    {
        if (current_size < CAPACITY)
        {
            values[current_size] = input;
            current_size++;
        }
    }
    for(int i=0;i<current_size;i++){
        if (values[i]==0){
            number_of_zeros++;
        }
    }
    cout<<"Number of zeros in your array is: "<<number_of_zeros<<endl;
    clear_cin();

}

void question11(int values[],int s)
{
for (int i = 0; i < s; i++)
    {
        cout << values[i];
        if (i < (s-1))
        {
            cout << " | ";
        }

    }
}

void question12(int values[],int s)
{
cout << values[0];
for (int i = 1; i < s; i++)
{
cout << ", " << values[i];
}
}

void question13(int values[],int s)
{
    bool found=false;
    for (int pos = 0; pos < s && !found; pos++)
    {
        cout<<pos;
        if (values[pos] == 100)
        {
        found = true;
        }
    }
    cout<<found;
}

void insert_element_end(int values[],int current_size,int elem,const int CAPACITY)
{
    if(current_size<CAPACITY)
    {
        current_size++;
        values[current_size-1]=elem;
    }
    cout<<"Current size: "<<current_size<<endl;
    cout<<values[0];
    for(int i=1;i<current_size;i++)
    {
        cout<<", "<<values[i];
    }

}

void insert_element_at_position(int values[],int current_size,int elem,int pos,const int CAPACITY)
{
    if(current_size<CAPACITY)
    {
        current_size++;
        for(int i=current_size;i>pos;i--)
        {
            values[i]=values[i-1];
        }
        values[pos]=elem;
    }
    cout<<"Current size: "<<current_size<<endl;
    cout<<values[0];
    for(int i=1;i<current_size;i++)
    {
        cout<<", "<<values[i];
    }

}


int main()
{
//Question 1: What is the output of the largest.cpp program with the following inputs? 20 10 20 Q

//get_the_largest_element();
//question2();
//get_the_largest_element2();
const int CAPACITY=10;
int values[CAPACITY]={1,2,100,4,5}; //partially filled array
int s=sizeof(values)/sizeof(values[0]);
//question11(values,5); //we give the current size, 5
//question12(values,5);
//question13(values,s);
//insert_element_end(values,5,10,CAPACITY);
insert_element_at_position(values,5,3,2,CAPACITY);
}
