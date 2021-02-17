#include <iostream>

using namespace std;
class incre
{
    int i;
public:
    incre():i(0){}
    void init()
    {
        cout<<"Enter a number: ";
        cin>>i;
    }
    int operator ++()
    {
        cout<<"\nThis is pre-increment:";
        return ++i;
    }
    int operator ++(int)
    {
        cout<<"\nThis is post-increment: ";
        return i++;
    }
};
int main()
{
    incre a;
    a.init();
    cout<<a++;
    cout<<++a;
    return 0;

}
