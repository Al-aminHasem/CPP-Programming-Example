#include<iostream>
using namespace std;
class sum
{
public:
    int a,b;
    function1();
};
inline int sum::function1()
{
    return a+b;
}
int main()
{
    sum obj;
    obj.a=8;
    obj.b=6;
    cout<<obj.function1()<<endl;
    return 0;
}
