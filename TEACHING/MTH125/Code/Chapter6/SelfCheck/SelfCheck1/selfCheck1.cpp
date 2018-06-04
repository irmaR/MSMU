#include<iostream>
using namespace std;

int print_array(int arr[], int arr_size);

int main(){
cout<<"Question 1..."<<endl;
//1. Define an array of integers containing the first five prime numbers
int primes[]={1,2,3,5,7};
int size = sizeof(primes)/sizeof(primes[0]);

print_array(primes,5);

cout<<"Question 2 ..."<<endl;
//2. Assume the array primes has been initialized as described in Self Check 1. What is
//its contents after executing the following loop?

//this is going to change our original array. Hence, I will make a new primes array that will be modified.
int primes1[]={1,2,3,5,7};
for (int i = 0; i < 2; i++){  //the function swaps last two elements of the array by the two first elements of the array
primes1[4 - i] = primes1[i];
}
print_array(primes1,5);

cout<<"Question 3 ..."<<endl;
// Assume the array primes has been initialized as described in Self Check 1. What is
//its contents after executing the following loop?
int primes2[]={1,2,3,5,7}; //all of the elements are incremented
for (int i = 0; i < 5; i++){
primes2[i]++;
}
print_array(primes2,5);

cout<<"Question 4 ..."<<endl;
//Given the definition const int CAPACITY = 10; double values[CAPACITY]; write statements to put a zero into the elements of the array values with the lowest and the highest valid index.
const int CAPACITY = 10;
double values[CAPACITY];
values[0]=0; //the trick here is to check if they know array indexing
values[9]=0;
for (int i = 0; i < CAPACITY; i++){
        cout<<values[i]<<endl;
}

cout<<"Question 5 ..."<<endl;
//Given the array defined in Self Check 4, write a loop to print the elements of the array values in reverse order, starting with the last element.
for (int i=CAPACITY-1;i>=0;i--){  //with a decrement, interesting but I don't think it's mentioned
  cout<<values[i]<<endl;
}
cout<<"Version without a decrement ..."<<endl;
for (int i=1;i<=CAPACITY;i++){
  cout<<values[CAPACITY-i]<<endl;
}

cout<<"Question 6 ..."<<endl;
//Define an array called words that can hold ten values of type string.
string words[CAPACITY];

cout<<"Question 7..."<<endl;
//7.  Define an array containing two strings, "Yes", and "No".
string boolean[]={"Yes","No"};


//ADDED IRMA
cout<<"Question 8..."<<endl;
//What will be the elements of the values when initialized as: int values[5]={1,2,3};
int values_overflow[5]={1,2,3};
print_array(values_overflow,5);

cout<<"Remark 1 ..."<<endl;
cout<<"Fun fact: This is also a valid array initialization: int values[] {1,2,3};"<<endl;
int values_init[]{1,2,3};
print_array(values_init,3);




}

int print_array(int arr[],int arr_size){
    for (int i = 0; i < arr_size; i++){
        cout<<arr[i]<<endl;
    }
}
