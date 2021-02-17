#include <iostream>

using namespace std;

class a
{
public:
    a(){cout<<"\nA Constructor called.";}
    ~a(){cout<<"\nA Destructor called.";}
};
class b:public a
{
public:
    b(){cout<<"\nB Constructor called.";}
    ~b(){cout<<"\nB Destructor called.";}
};
class c
{
public:
    c(){cout<<"\nC Constructor called.";}
    ~c(){cout<<"\nC Destructor called.";}
};
class d:public b,public c
{
public:
    d(){cout<<"\nD Constructor called.";}
    ~d(){cout<<"\nD Destructor called.";}
};
int main()
{
    cout<<"\nA object construction:";

    a q;cout<<"\n------------------------------------\n";
    cout<<"\nB object construction:";

    b w;cout<<"\n------------------------------------\n";
    cout<<"\nC object construction:";

    c e;cout<<"\n------------------------------------\n";
    cout<<"\nD object construction:";

    d r;cout<<"\n------------------------------------\n";
    return 0;
}
