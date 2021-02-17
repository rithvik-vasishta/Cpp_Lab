#include <iostream>

using namespace std;
class stud
{
    char name[100];
    char g;
    int r;
    int m1,m2,m3;
public:
    void read();
    void print();
    void grade();

};
void stud::read()
{
    cout<<"Enter the name and roll number: \n";
    cin>>name>>r;

}
void stud::print()
{
    if((m1<=100)&&(m2<=100)&&(m3<=100))
    cout<<"\nName:"<<name<<"\nRoll number:"<<r<<"\nGrade awarded:"<<g<<"\n";
    else
    cout<<"\nName:"<<name<<"\nRoll number:"<<r<<"\nInvalid marks";

}
void stud::grade()
{
    cout<<"Enter the marks of 3 subjects: ";
    cin>>m1>>m2>>m3;
    int a=(m1+m2+m3)/3;
    if((m1<=100)&&(m2<=100)&&(m3<=100))
    {
        if(a>=90)
        g='S';
    else if(a>=80)
        g='A';
    else if(a>=70)
        g='B';
    else if(a>60)
        g='C';
    else if(a>=50)
        g='D';
    else if(a>=40)
        g='E';
    else g='F';
    }
    else
    {g='Z';

    }

}
int main()
{
    int n;
    cout<<"\nhow mny?:";
    cin>>n;
    stud s[n];
    stud *p;
    p=&s[0];
    int i;
    for(i=0;i<n;i++)
    {
        s[i].read();
        s[i].grade();
    }
        for(i=0;i<n;i++)
            s[i].print();
        return 0;
}
