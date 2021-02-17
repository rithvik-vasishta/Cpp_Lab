#include <iostream>
#include<fstream>>
using namespace std;
int main()
{
    streampos a,b;
    fstream f;
    f.open("temp11.txt",ios::in);
    f.seekg(5L,ios::beg);
    a=f.tellg();
    f.seekg(-5L,ios::end);
    b=f.tellg();
    cout<<b-a;
    f.close();
    return 0;
}
