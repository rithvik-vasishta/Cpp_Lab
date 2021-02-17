#include<iostream>
#include<fstream>
using namespace std;
class stud
{
    char c[20];
   int sub[3];
   float g;
public:
    void setdata()
    {
        cout<<"Enter name: ";
        cin>>c;
        for(int i=0;i<3;i++)
        {
            cout<<"Enter marks for subject "<<i+1<<endl;
            cin>>sub[i];
        }
        g=(sub[0]+sub[1]+sub[2])/3;
    }
        void putdata()
        {
            cout<<"Name: "<<c;
            for(int i=0;i<3;i++)
                cout<<endl<<"Marks for subject "<<i+1<<" is "<<sub[i];
                cout<<"Grade: "<<g;
        }

};
int main()
{
    int n;
    cout<<"How many students?:";
    cin>>n;
    fstream file("temp9.txt",ios::binary|ios::app);
    for(int i=0;i<n;i++)
    {
    stud s;
    cout<<"Enter details of student "<<i+1<<endl;
    s.setdata();
    file.write((char *)&s,sizeof(s));
    }
    file.close();
    file.open("temp9.txt",ios::in);
    for(int i=0;i<n;i++)
    {


    stud q;
    file.read((char *)&q,sizeof(q));
    cout<<"the details of student "<<i+1<<" are :";
    q.putdata();
    }
    file.close();
    return 0;
}
