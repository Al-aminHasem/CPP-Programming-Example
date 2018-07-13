/***Use of Class.
Write a Program to read two numbers from the keyboard & display the larger
value on the screen***/
#include<iostream>
using namespace std;
class number
{
    int a,b;
public:
    void getnumber();
    void outputnumber();
};
void number::getnumber()
{
    cout<<"Enter two numbers:";
    cin>>a>>b;
}
void number::outputnumber()
{
    if(a>b)
    {
        cout<<"The large number is="<<a;
    }
    else if(a<b)

    {
        cout<<"The large number is="<<b;
    }
    else if(a==b)
    {
        cout<<"The number are equal";
    }
    else
    {
        cout<<"The numbers are invalid";
    }
}
    int main()
    {
        number larger;
        larger.getnumber();
        larger.outputnumber();
        return 0;
    }
