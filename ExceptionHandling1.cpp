#include<iostream>
using namespace std;
//exception:-abnormal condition
//exception handling:-is using to avoid abnormal condition
int main()
{
    int a,b;
    cout<<"enter 2 values\n";
    cin>>a>>b;
    try{
        if(b==0)
        {
            throw b;
        }
        cout<<a/b<<"\n";
    }
    catch(int e)//b=e
    {
        cout<<"denominator can not be zero\n"<<e<<"\n";

    }
    cout<<"done";
}
