//wap to find the min value?

#include<iostream>
using namespace std;
int main()
{
    int chotu;
    int a[]={1,23,5,6,8,-2,-4};
    chotu=a[0];
    for(int i=1;i<5;i++)
    {
        if(chotu>a[i])
        {
            chotu=a[i];
        }
        cout<<"min="<<chotu;
    }
}