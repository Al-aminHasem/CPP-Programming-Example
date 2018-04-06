#include<iostream>
using namespace std;
int main()
{
    int x=20;
    int *p1;
    p1=&x;
    cout<<x<<" "<<*p1<<endl<<&x<<" "<<p1;
}
