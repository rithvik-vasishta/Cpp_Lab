#include <iostream>

using namespace std;
class student
{
protected:

    string name,usn;
    int age;
public:
    int getage()
    {
        return age;
    }
};
class ug:public student
{

    int sem,fee,stip;
public:
    int getsem()
    {
        return sem;
    }
    void getdata()
    {
        cout<<"\nEnter the name,USN and age: ";
        cin>>name>>usn>>age;
        cout<<"\nEnter the semester,fees and stipend: ";
        cin>>sem>>fee>>stip;
    }
    void print()
    {
        cout<<"\nNAME:"<<name<<"\nUSN:"<<usn<<"\nSEM:"<<sem<<"\nFEES:"<<fee<<"\nSTIPEND:"<<stip<<"\nAGE:"<<age;
    }
};
/*class pg:public student
{

    int sem,fee,stip;
public:
    int getsem()
    {
        return sem;
    }
    void getdata()
    {
        cout<<"\nEnter the name,USN and age: ";
        cin>>name>>usn>>age;
        cout<<"\nEnter the semester,fees and stipend: ";
        cin>>sem>>fee>>stip;
    }
    void print()
    {
        cout<<"\nNAME:"<<name<<"\nUSN:"<<usn<<"\nSEM:"<<sem<<"\nFEES:"<<fee<<"\nSTIPEND:"<<stip<<"\nAGE:"<<age;
    }

};*/
int main()
{
    int i;
    ug u[20];
    int n;
    cout<<"\nHow many UG students?:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter details for "<<i+1<<" st/nd/rd/th student:";
        u[i].getdata();
    }
    cout<<"\nUG STUDENTS DETAILS:\n";
    cout<<"---------------------------------------------------------";
    for(i=0;i<n;i++)
        u[i].print();

    for(int sem=1;sem<=8;sem++)
       {float s=0;
       int f=0,c=0;
    for(i=0;i<n;i++)
     {

       if(u[i].getsem()==sem)
    {

        s+=u[i].getage();
        f=1;
        c++;
    }}
    if(f==1)
    {
        int avg=s/c;
        cout<<"\nThe average age of semester "<<sem<<" is: "<<avg;
    }
       }
       return 0;
}
