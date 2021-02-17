#include <iostream>
#include<string.h>
using namespace std;
class str
{
    string s;
public:
    str(){}
    str(string a):s(a){}
    str(str& a):s(a.s){}
    void read()
    {
        cout<<"\nEnter the string: ";
        cin>>s;

    }
    void print()
    {
        cout<<"\nThe string is: "<<s;

    }
    void concat(str& a)
    {
        s=s+a.s;
    }
};
int main()
{
    str a;
    str b;
    b.read();
    b.print();
    str c("HELLO");
    c.print();
    cout<<"\nConcatenated string is: ";
    str d(c);
    d.concat(b);
    d.print();
    return 0;
}
