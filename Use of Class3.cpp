/***Use of Class.
Write a C++ program that will ask for a temperature
in Fahrenheit & display it in Celsius***/
#include<iostream>
using namespace std;
class temperature
{
    double F,C;
public:
    void getdata();
    void putdata();
};
void temperature::getdata()
{
    cout<<"Enter the Fahrenheit temperature=";
    cin>>F;
}
void temperature::putdata()
{
    cout<<"The Celsius temperature= ";
    C=(F-32)*5/9;
    cout<<C;
}
int main()
{
    temperature object;
    object.getdata();
    object.putdata();
    return 0;
}
