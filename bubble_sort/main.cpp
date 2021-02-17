#include <iostream>

using namespace std;

template <class T>
class b
{
    T a[100],i,j,t;
    int n;
public:
    void bubble()
    {
        for(i=0;i<n-1;i++)
         for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    void read()
    {
        cout<<"\nHow many elements: ";
    cin>>n;
    cout<<"\nEnter the elements:";
    for(int i=0;i<n;i++)
        cin>>a[i];

    }
    void print()
    {
         cout<<"\nThe list after sorting is:";
    for(int i=0;i<n;i++)
        cout<<"\t"<<a[i];
    }
};



int main()
{
    b <int> q;
    q.read();
    q.bubble();
    q.print();
    return 0;

}
