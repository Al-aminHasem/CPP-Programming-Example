#include<iostream>
using namespace std;
first()
{
    int *v;
    int m;
    cin>>m;
    v=new int[m];
    v[m-1]=10;
    v[m-2]=12;
    cout<<v[m-1]<<endl<<v[m-2];
    delete[]v;

}

int main()
{
    first();
    return 0;
}
