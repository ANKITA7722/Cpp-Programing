#include<iostream>
using namespace std;
int main()
{
/*
    int a= 19;
    int *ap = &a;
    cout<<*ap<<"\n";//value print karta hai
    a=20;
    cout<<ap<<"\n";//addsess
    cout<<*ap<<"\n";//updated value print karta hai
    cout<<a;

    ap++;
    cout<<ap<<"\n";//intizer 4 byte memoy leta hai
*/
/*
char c = 'a';
char *ch = &c;
cout<<*ch<<"\n";//only ak hi character ko print karega
cout<<c<<"\n";
ch++;//character 1 byte leta hai
cout<<ch;//ye address print karega */

int arr[]={1,2,3,4,5,7};
    //*ptr = arr;
    cout<<arr<<"\n";//ye address print karta hai
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
//cout<<*ptr;
}
