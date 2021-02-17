#include<iostream>
//#include<stdlib.h>
#include<fstream>
//#include<cstring>
using namespace std;
class stud
{
        char name[10];
        int roll;
        int sub[3];
        float grade;
        public:
                void set()
                {
                        cout<<endl<<"Enter the name:";
                        cin>>name;
                        cout<<endl<<"Enter the roll number:";
                        cin>>roll;
                        for(int i=0;i<3;i++)
                        {
                                cout<<endl<<"Enter the marks for sub "<<i+1<<":";
                                cin>>sub[i];
                        }
                        compute();
                }
                void compute()
                {
                        grade=(sub[0]+sub[1]+sub[2])/30;
                }
                void disp()
                {
                        cout<<endl<<"Name:"<<name;
                        cout<<endl<<"Roll Number:"<<roll;
                        for(int i=0;i<3;i++)
                        {
                                cout<<endl<<"Marks for sub "<<i+1<<":";
                                cout<<sub[i];
                        }
                        cout<<endl<<"Grade:"<<grade;
                }


};
int main()
{

        int n;
        cout<<"Enter the number of students:";
        cin>>n;
        fstream file("Records.dat", ios::binary|ios::app);
        for(int i=0;i<n;i++)
        {
                stud s;
                //fstream file("Records.dat", ios::bin|ios::app)
                cout<<endl<<"Enter details of student "<<i+1<<":";
                s.set();
                file.write((char *)&s,sizeof(s));
        }

        file.close();
        file.open("Records.dat",ios::in);
        for(int i=0;i<n;i++)
        {
                stud s;
                cout<<endl<<"Details of student "<<i+1<<":";
                file.read((char *)&s,sizeof(s));
                s.disp();
        }
        file.close();
        return 0;
}
