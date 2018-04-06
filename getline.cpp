#include<iostream>
using namespace std;
int main()
{
    int size=20;
    char a[20];
    cout<<"Enter a name:";
    cin>>a;
    cout<<a;
    cin.getline(a,size);
    cout<<a;
     cout<<"Enter a name:";
    cin>>a;
    cout<<a;
    cin.getline(a,size);
    cout<<a;
    return 0;
}
