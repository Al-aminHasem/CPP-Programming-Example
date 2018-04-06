#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<endl;

    }
for(int i=4;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
     for(int i=0;i<=3;i++)
    {
        cout<<endl<<arr[i+1];
    }


}
