#include <iostream>

using namespace std;
class A
{
public:
    A()
    {
        cout<<endl<<"This is A";
    }
};
class B:virtual public A
{
public:
    B()
    {
        cout<<endl<<"This is B";
    }
};
class C:virtual public A
{
public:
    C()
    {
        cout<<endl<<"This is C";
    }
};
class D: public B, public C
{
public:
    D()
    {
        cout<<endl<<"This is D";
    }
};
int main()
{
    D d;
    return 0;
}
