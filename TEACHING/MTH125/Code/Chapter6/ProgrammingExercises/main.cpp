#include <iostream>
#include <ctime>

using namespace std;

void print_array(int arr[], int curr_size)
{
    for(int i=0;i< curr_size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void P6_1()
{
    srand((unsigned)time(0));
    int randoms[10];
    for(int i=0; i<10; i++)
    {
        randoms[i]=rand()%100;
        cout<<" "<<randoms[i];
    }
    cout<<endl;
    for(int i=0;i<10; i++)
    {
        if(~i%2)
        {
            cout<<" "<<randoms[i];
        }
    }
    cout<<endl;
    for(int i=0;i<10; i++)
    {
        if(~randoms[i]%2)
        {
            cout<<" "<<randoms[i];
        }
    }
    cout<<endl;
    for(int i=9;i--;i>=0)
    {
        cout<<" "<<randoms[i];
    }
    cout<<endl;
    cout<<randoms[0]<<endl;
    cout<<randoms[9];


}

/**
a. Swap the first and last element in an array.
*/
void P6_2a(int values[],int current_size)
{
    int tmp=values[0];
    values[0]=values[current_size-1];
    values[current_size-1]=tmp;
    print_array(values,current_size);
}

/**
b) Shift all elements by one to the right and move the last element into the first
position. For example, 1 4 9 16 25 would be transformed into 25 1 4 9 16.
*/
void P6_2b(int values[],int current_size)
{
    int tmp=values[current_size-1];
    for(int i=current_size-1;i>0;i--)
    {
        values[i]=values[i-1];
    }
    values[0]=tmp;
    print_array(values,current_size);
}

/**
c. Replace all even elements with 0.
*/
void P6_2c(int values[],int current_size)
{
    for(int i=0;i<current_size;i++)
    {
        if(~values[i]%2)
        {
            values[i]=0;
        }
    }
    print_array(values,current_size);
}

/**
d. Replace each element except the first and last by the larger of its two neighbors.
*/
void P6_2d(int values[],int current_size)
{
    for(int i=1;i<current_size-1;i++)
    {
        values[i]=values[i-1]>values[i+1]?values[i-1]:values[i+1];
    }
    print_array(values,current_size);
}

/**
e. Remove the middle element if the array length is odd, or the middle two
elements if the length is even.
*/
int P6_2e(int values[],int current_size) //what if size 0, size 1, size 2?
{
    //border cases, not sure if needed
    if(current_size==1 || current_size==2)
    {
        values={};
        current_size=0;
        return current_size;
    }

    if(current_size%2)
    {
        int middle=current_size/2;
        for(int i=middle;i<current_size;i++)
        {
            values[i]=values[i+1];
        }
        current_size--;
    }
    else
    {
        int middle=current_size/2;
        int middle2=middle-1;
        for(int i=middle2;i<current_size-2;i++)
        {
            values[i]=values[i+2];

        }
        current_size=current_size-2;
    }
    print_array(values,current_size);
    return current_size;
}

/**
e. Move all even elements to the front, otherwise preserving the order of the
elements.
*/
int P6_2f(int values[],int current_size)
{
    for(int i=0;i<current_size;i++)
    {
        if(~values[i]%2) //if even
        {
            for(int j=i;j>0;j--)
            {
                //if lower element is odd swap the odd and the even
                if(values[j-1]%2)
                {
                    int tmp=values[j-1];
                    values[j-1]=values[j];
                    values[j]=tmp;
                }
            }
        }
    }
    print_array(values,current_size);
}


/**
f. Return the second-largest element in the array
*/
int P6_2g(int values[],int current_size)
{
    int maximum1=values[0];
    int maximum2=values[0];
    for(int i=1;i<current_size;i++)
    {
        if(values[i]>maximum1)
        {
            maximum1=values[i];
        }
        if(values[i-1]>maximum2 && values[i-1]<maximum1)
        {
            maximum2=values[i-1];
        }
    }
    cout<<"max: "<<maximum1<<" max 2: "<<maximum2;
}

/**
h. Return true if the array is currently sorted in increasing order.
*/
bool P6_2h(int values[],int current_size)
{
    for(int i=1;i<=current_size;i++)
    {
        if(~(values[i]>values[i-1]))  //<--- hmm here this extra brackets really mean a lot!!! Make a note for the students that negation on a number gives a complement and counts like a number. Brackets needed!
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //P6_1();

    //P62
    int values[]={20,2,3,4,5,6,7,8};
    const int current_size=8;
    //P6_2a(values,current_size);
    //P6_2b(values,current_size);
    //P6_2c(values,current_size);
    //P6_2d(values,current_size);
    //P6_2e(values,current_size);
    //P6_2f(values,current_size);
    //P6_2g(values,current_size);
    //cout<<P6_2h(values,current_size);
    char char_pointer[]="Harry";
    *(char_pointer)='L';
    //cout<<char_pointer<<endl;
    int a=10;
    int* p=&a;
    //cout<<p<<endl;
    int b;
    cout<<b*2;
}
