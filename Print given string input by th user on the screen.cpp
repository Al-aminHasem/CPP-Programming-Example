#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string:\n";
    cin>>str;
    cin.getline(str,100);
    cout<<"The string Entered is:\n"<<str<<endl;
    return 0;
}
