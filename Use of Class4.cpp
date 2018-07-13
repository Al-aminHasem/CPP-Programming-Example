/***Use of Class.
Write a function to swap a pair integer .Also write the main function to
test the function ***/
#include<iostream>
using namespace std;
class number
{
    int a,b,temp;
public:
    void getdata();
    void putdata();
};
void number::getdata()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
}
void number::putdata()
{
    cout<<"Given numbers = "<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap the numbers are ="<<a<<" "<<b;
}
int main()
{
    number object;
    object.getdata();
    object.putdata();
    return 0;
}
