#include<iostream>
using namespace std;
int main()
{
    int *s,**p;
    int a=8, b=9;
    s=&a;
    p=&s;
    cout<<**p<<endl;
    cout<<*s;

}
