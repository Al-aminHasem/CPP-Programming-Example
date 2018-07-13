/***Use of Class.
Write a program to read the values of a,b,c & display the value
of x,where x=a/b-c
Test your program   for the following values:
(a)a=250,b=85,c=25
(b)a=300,b=70,c=70**/
#include<iostream>
using namespace std;
class values
{
    double a,b,c,x;
    public:
    void getvalue();
    void displayresult();
};
void values::getvalue()
{
    cout<<"Enter the value of a,b & c: ";
    cin>>a>>b>>c;
}
void values::displayresult()
{
    cout<<"The result is x= ";
    x=(a/b)-c;
    cout<<x;
}
int main()
{
    values object;
    object.getvalue();
    object.displayresult();
    return 0;
}
