#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int c=0;
    string l;
    fstream file;
    file.open("lines.txt",ios::in);
    while(getline(file,l))
    {
        c++;
    }
    cout<<endl<<endl<<c;
    return 0;
}
