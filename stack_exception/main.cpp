#include <iostream>

using namespace std;
int main()
{
    try
    {
        int a[5];
        int top=-1;
        int c,n;
        bak:
            cout<<"Enter 1 to push,2 to pop,3 to display: ";
            cin>>c;
            switch(c)
            {
                case 1:if(top==5)
                          throw(top);
                        cout<<"\nEnter the element to be inserted: ";
                        cin>>n;
                        a[++top]=n;
                        goto bak;
                case 2:if(top==-1)
                           throw(top);
                        n=a[top--];
                        cout<<"\nElement popped is : "<<n;
                        goto bak;
                case 3:cout<<endl;
                       for(int i=0;i<=top;i++)
                        cout<<a[i]<<"     ";
                        goto bak;
                default:cout<<"INVALID CHOICE";
                                break;
            }
    }
    catch(int top)
    {
        if(top==5)
            cout<<"OVERFLOW"<<endl;
        else
            cout<<"UNDERFLOW"<<endl;
    }
    return 0;

}
