//  find the search element in array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    bool f=false;
    int n;
    cout<<"\n Enter data you want search\n";
    cin>>n;
    for(int j=0;j<s;j++)
    {
        if(arr[j]==n)
        {
            f=true;
        break;
        }
    }
    if(f==true)
    {
        cout<<"found";
    }else
    {
        cout<<"not found";
    }
}