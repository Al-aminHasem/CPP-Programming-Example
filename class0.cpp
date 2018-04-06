#include<iostream>
using namespace std;
class add{
public:
    int a,b;
    mul();
};
int add::mul()
    {
        int a,b;
        return a*b;
    }

int main()
{
    int sum;
    add obj;
    obj.a=6;
    obj.b=10;
    sum=obj.a+obj.b;
    cout<<sum<<endl;
    cout<<obj.mul();
    return 0;
}
