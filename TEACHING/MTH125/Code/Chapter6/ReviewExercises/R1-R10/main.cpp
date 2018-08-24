#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;



void R61()
{
    //a)
    double values1[10];
    for(int i=0;i<11;i++)
    {
        values1[i]=i+1;
        cout<<" "<<values1[i];
    }
    cout<<endl;
    //b)
    double values2[10];
    for(int i=0;i<10;i++)
    {
        values2[i]=2*i;
        cout<<" "<<values2[i];
    }
    cout<<endl;
    //c)
    double values3[10];
    for(int i=0;i<10;i++)
    {
        values3[i]=(i+1)*(i+1);
        cout<<" "<<values3[i];
    }
    cout<<endl;
    //d)
    double values4[10];
    for(int i=0;i<10;i++)
    {
        values4[i]=0;
        cout<<" "<<values4[i];
    }
    cout<<endl;

    //e
    double values5[]={1,4,9,16,9,7,4,9,11};
    for(int i=0;i<9;i++)
    {
        cout<<" "<<values5[i];
    }
    cout<<endl;
    //f)
    double values6[10];
    for(int i=0;i<10;i++)
    {
        if(i%2) //if odd put 1
        {
            values6[i]=1;
        }
        else
        {
            values6[i]=0;
        }
        cout<<" "<<values6[i];
    }
    cout<<endl;
    //g
    double values7[10];
    for(int i=0;i<10;i++)
    {
        if(i<5)
        {
            values7[i]=i;
        }
        else
        {
            values7[i]=i-5;
        }
        cout<<" "<<values7[i];
    }
}

void R64()
{
    srand(time(0));
    int randnumbers[10];
    int num;

    for(int i=0; i<10; i++)
    {
        //generate random number
        bool exists;
        do
        {
            exists=false;
            num = rand() % 100 + 1;
            for(int j=i; j>0; j--)
            {
                if(randnumbers[j]==num)
                {
                    exists=true;
                }
            }
        }
        while(exists);
        randnumbers[i]=num;
        cout<<" "<<randnumbers[i];
    }
}

void R65()
{
    int values[]={1,2,3,4,5};
    double maximum=values[0];
    double minimum=values[0];
    for(int i=1;i<5;i++)
    {
        if(values[i]>maximum)
        {
            maximum=values[i];
        }
        if(values[i]<minimum)
        {
            minimum=values[i];
        }
    }
    cout<<"Max: "<<maximum<<" Min: "<<minimum;
}

void R69()
{
    int values[10];
    int current_size=0;
    int input;
    while(cin >> input)
    {
        if(current_size<10)
        {
            values[current_size]=input;
            current_size++;
        }
        else
        {
            break;
        }
    }
    cout<<current_size;
    for(int i=9;i>=0;i--)
    {
        cout<<" "<<values[i];
    }
}

int R622()
{
    vector<int> a={1,2, 5, 5, 3, 1, 2, 4, 3, 2, 2, 2, 2, 3, 6, 5, 5, 6, 3, 1};
    int run=1;
    int max_run=0;

    for(int i=0;i<a.size()-1;i++)
    {
        cout<<a[i]<<" vs "<<a[i+1]<<"\t";
        if(a[i]==a[i+1])
        {
            run++;

        }
        else
        {
            if(run>max_run)
            {
                max_run=run;
            }
            run=1;
        }
        cout<<run<<endl;
    }
    cout<<max_run;
    return max_run;
}

int R623()
{
    const int ROWS=4;
    const int COLUMNS=4;
    int matrix[ROWS][COLUMNS]={};
    for(int i=0;i<ROWS;i++)
    {
        matrix[i][0]=-1;
        matrix[i][COLUMNS-1]=-1;
        for(int j=0;j<COLUMNS;j++)
        {
            matrix[0][j]=-1;
            matrix[ROWS-1][j]=-1;
        }
    }


    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLUMNS;j++)
        {
            cout<<" "<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }
}


int main()
{
     R61();
    //R64();
    //R65();
    //R69();
    //R622();
    //R623();
    return 0;
}
