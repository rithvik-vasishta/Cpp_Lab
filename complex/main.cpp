#include <iostream>
using namespace std;
class complex
{
    int re;
    int img;
public:
    complex():re(0),img(0){cout<<"\nCONSTRUCTOR INITIATED";}
    void read();
    void print();
    friend complex add(complex a,complex b);
    friend complex mult(complex a,complex b);
};
void complex::read()
{
    cout<<"\nEnter the real and imaginary part of the complex number: ";
    cin>>re>>img;
}
void complex::print()
{
    cout<<"\nThe complex number is:"<<re<<"+i"<<img;
}
complex add(complex a,complex b)
{
    complex q;
    q.re=a.re+b.re;
    q.img=a.img+b.img;
    return q;
}
complex mult(complex a,complex b)
{
    complex q;
    q.re=(a.re*b.re)-(a.img*b.img);
    q.img=(a.re*b.img)+(a.img*b.re);
    return q;
}
int main()
{
    complex a;
    cout<<"\nEnter complex number 1:";
    a.read();
    complex b;
    cout<<"\nEnter complex number 2:";
    b.read();
    complex m=add(a,b);
    complex n=mult(a,b);
    m.print();
    n.print();
    return 0;
}
