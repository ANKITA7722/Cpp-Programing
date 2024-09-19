#include<iostream>
using namespace std;
class atmcard
{
    static int c;
    public:atmcard()
    {
        c++;
        cout<<c<<"\n";

    }
};
int atmcard::c=0;
int main()
{

    atmcard a1;
    atmcard a2;
    atmcard a3;
}