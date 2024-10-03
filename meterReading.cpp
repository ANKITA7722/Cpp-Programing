#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter meter reading\n";
    cin>>n;
        if(n>=1 && n<=100 && n>0!=0)
    {        cout<<"print charge"<<n*5;

        cin>>n;
        if(n>100 && n<500)
        {
            cout<<n*7;
            cin>>n;
            if(n>500)
            {
                cout<<n*10;
            }
            else
                {
                    cout<<"condition is not true";
                }
        }
        else
        {
             cout<<"invalid";
        }
    }
    else
    {
        cout<<"invalid meter reading";
    }
}
