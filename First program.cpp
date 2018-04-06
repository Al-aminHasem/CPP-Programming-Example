#include<iostream>
#include<algorithm>
using namespace std;
 int main()
{
    string a,b,c;
    a="al-amin";
    b=" al-amin";
    int arr[]={2,3,6,8,1,9,0};
    for(int i=0;i<=6;i++)
    cout<<arr[i]<<(" ");
    sort(arr,arr+7);
    for(int i=0;i<=6;i++)
        cout<<arr[i]<<" "<<endl;
    c=a+b;
    cout<<c;
    return 0;
}

