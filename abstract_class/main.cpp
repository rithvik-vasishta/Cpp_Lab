#include <iostream>

using namespace std;
class base
{
protected:
    int sem;
public:
    virtual void show() = 0;
    base(int i){sem=i;}

};
class engg:public base
{
    string name;
public:
    engg(int a,string b):base(a){name=b;}
    void show()
    {
        cout<<"ENGG STUD"<<endl;
        cout<<"NAME: "<<name<<endl<<"SEM: "<<sem<<endl;
    }
};
class sci:public base
{
    string name;
public:
    sci(int a,string b):base(a){name=b;}
    void show()
    {
        cout<<"SCIENCE STUD"<<endl;
        cout<<"NAME: "<<name<<endl<<"SEM: "<<sem<<endl;

    }
};
class med:public base
{
    string name;
public:
    med(int a,string b):base(a){name=b;}
    void show()
    {
        cout<<"MEDICAL STUD"<<endl;
        cout<<"NAME: "<<name<<endl<<"SEM: "<<sem<<endl;
    }
};
int main()
{
    int a;
    string name;
    cout<<endl<<"Enter engg stud details: ";
    cout<<endl<<"Enter name and sem: ";
    cin>>name>>a;
    engg e(a,name);
        cout<<endl<<"Enter Science stud details: ";
    cout<<endl<<"Enter name and sem: ";
    cin>>name>>a;
    sci s(a,name);
    cout<<endl<<"Enter medical stud details: ";
    cout<<endl<<"Enter name and sem: ";
    cin>>name>>a;
    med m(a,name);
    e.show();
    s.show();
    m.show();
}
