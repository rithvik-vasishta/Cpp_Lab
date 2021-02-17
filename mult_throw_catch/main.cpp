#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    try
    {
        try
        {
            if(b==0)
                throw '0';
            else
                throw 1;
        }
        catch(char c)
        {
            cout<<endl<<"Divide by 0 error:";
        }
        catch(int c)
        {
            if(((int)a%(int)b)==0)
                cout<<endl<<"The numbers are divisible and quotient is: "<<a/b;
            else
                throw 'a';
        }
    }
    catch(char a)
    {
        cout<<endl<<"Error rethrown:Numbers are not divisible";
    }
    return 0;
}
