#include <iostream>
using namespace std;
#define n 20


class shopping
{
int itemcode[n];
int price[n];
int cnt;
public:shopping()
{
cnt=0;
}
public:void getorder();
void display();
void cancel();
};
void shopping::getorder()
{
cout<<"\Enter itemcode\n";
cin>>itemcode[cnt];
cout<<"\Enter Price\n";
cin>>price[cnt];
cnt++;
}
void shopping::display()
{
for(int i=0;i<cnt;i++)
{
cout<<"Itemcode="<<itemcode[i]<<"\t";
cout<<"Price="<<price[i]<<"\n";
}
}
void shopping::cancel()
{
int code;
cout<<"\nenter itemcode\n";
cin>>code;
for(int i=0;i<cnt;i++)
{
if(itemcode[i]==code)
{
price[i]=0;
}
}
}
int main()
{
shopping s;
int c;
char ch;
do
{
 cout<<"shopping cart------------------------------\n";
cout<<"  Enter 1 To add cart\n Enter 2 To display list\n Enter 3 to get cancel\n";
cin>>c;
switch(c)
{
case 1:
    {
     s.getorder();
     break;
    }
case 2:
    {
    s.display();
    break;
    }
case 3:
    {
    s.cancel();
    break;
    }
default:
    {
    cout<<"invalid choice\n";
    }
}
cout<<"Do u wanna Continue,select y\n";
cin>>ch;
}while(ch=='y');

}