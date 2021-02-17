#include <iostream>

using namespace std;
class box
{
        static int x;
        float l,b,h;
    public:
        box()
        {
            x++;
            cout<<"\nEnter the dimensions: ";
            cin>>l>>b>>h;

        }
        void volume()
        {
            cout<<"\nThe volume is: "<<l*b*h;
        }
        static void getcount()
        {
            cout<<"\nThe number of objects created are: "<<x;
        }
};
int box::x=0;
int main()
{
    box q;
    q.volume();
    box w;
    w.volume();
    box e;
    e.volume();
    box::getcount();
    return 0;
}
