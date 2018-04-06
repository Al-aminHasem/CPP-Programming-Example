#include<iostream>
using namespace std;
class div
 {
 public:
    float a,b;
     function3()
     {
         return a/b;
     }

};
int main()
{
    div obj;
    obj.a=100;
    obj.b=55;
    cout<<obj.function3()<<endl;
}
