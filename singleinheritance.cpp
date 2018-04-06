#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "This is a flower" << endl;
    }
};
class b: public a
{
};
int main()
{
    b obj;
    return 0;
    }

