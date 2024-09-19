#include<iostream>
using namespace std;

class sbi
{
    public:void show()
    {
        cout<<"sbi\n";
    }

};
class axis
{
    public:void display()
    {
       cout<<"axis\n";
    }
};
class cust:private sbi,private axis
{
    public:void msg()
    {
    sbi::show();
    axis::display();
    cout<<"custmore\n";
    }

};
int main ()
{
    cust c;
    c.msg();
}
