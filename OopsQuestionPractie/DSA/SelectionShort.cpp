#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,1,7,9,5};
    int chotu;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    for(int i=0;i<s;i++)
    {
        chotu=i;
        for(int j=i+1;j<s;j++)
        {
            if(arr[chotu]>arr[j])
            {
                chotu=j;
            }
        }
        if(chotu !=0)
        {
            int temp;
            temp=arr[chotu];
            arr[chotu]=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"\n after selection sort \n";
    for(int i=0;i<s;i++)
    {

        cout<<arr[i]<<"\t";
    }
}
