#include <iostream>

using namespace std;
class tim
{
    int h;
    int m;
    int s;
public:
    tim():h(0),m(0),s(0){}
    tim(int x,int y,int z):h(x),m(y),s(z){}
    void read()
    {
        cout<<"\nEnter the hours,min and secondsL ";
        cin>>h>>m>>s;
    }
    void print()
    {
        cout<<"\nThe time is : "<<h<<":"<<m<<":"<<s<<endl;
    }
    friend tim add(tim a,tim b);

};
tim add(tim a,tim b)
{
        tim c;
        c.h=(a.h+b.h)+(a.m+b.m)/60;
        c.m=(a.m+b.m)%60+(a.s+b.s)/60;
        c.s=(a.s+b.s)%60;
        return c;
    }
int main()
{
    tim a;
    a.read();
    tim b(3,4,5);
    tim c;
    c=add(a,b);
    c.print();
    return 0;
}
