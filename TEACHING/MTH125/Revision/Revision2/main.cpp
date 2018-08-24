#include <iostream>

using namespace std;




void question_2()
{
    float a=1.0;
    float b=3.0;

    if(a>b)
    {
        a = 2.0*a;
    }
    else
    {
        b = 2.0*b;
    }
    cout<<a<<" "<<b<<endl;

    a=1.0;
    b=3.0;
    if(a>=1) b=1.;
    cout<<a<<" "<<b;

}

void question_4()
{
    int i=0;
    float a=10.5;
    bool res1=(i<=0 || a>12.0);
    bool res2=!(i==0);
    bool res3=(i==0 && a>10.0 || a<9.0);
    cout<<res1<<endl;
    cout<<res2<<endl;
    cout<<res3<<endl;
}


void question_5(int i)
{
    if(i==7)
    {
        cout<<"Res 1";
    }
    else if(i==0)
    {
        cout<<"Res 2";
    }
    else if(i==21)
    {
        cout<<"Res 3";
    }
    else
    {
        cout<<"Res 4";
    }

}





int main()
{
    //question_2();
    question_4();
    //question_5(-3);
    //question_5(0);
    return 0;
}
