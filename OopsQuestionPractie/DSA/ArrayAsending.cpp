#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    int c=0;
    cout<<"\n Output of bubble sort\n";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            int tmp;
            if(arr[j]>arr[j+i])
            {
                tmp=arr[j];
                arr[j]=arr[j+i];
                arr[j+i]=tmp;
                c++;
            }
        }
        if(c==0)
        {
            if(c==0)
            {
                break;
            }
        }
        for(int i=0;i<s;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    }