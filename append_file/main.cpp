#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    char a[20],b[20];
    string line;
    fstream file("text1.txt",ios::out);
    cout<<"Enter the text for file 1:"<<endl;
    cin>>a;
    file<<a;
    file.close();
    fstream file1("text2.txt",ios::out);
    cout<<"Enter the text for file 2:"<<endl;
    cin>>b;
    file1<<b;
    file1.close();
    file1.open("text2.txt",ios::in);
    file1>>line;
    file1.close();
    file.open("text1.txt",ios::out|ios::app);
    file<<line;
    file.close();
    file.open("text1.txt",ios::in);
    cout<<endl<<"After appending"<<endl;
    while(!file.eof())
    {
        file>>line;
        cout<<line;
    }
    file.close();
    return 0;
}
