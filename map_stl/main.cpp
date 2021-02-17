#include <iostream>
#include<map>
using namespace std;
void showlist(map<char,string> l)
{
    map<char,string> :: iterator p;
    for(p=l.begin();p!=l.end();p++)
    {
        cout<<p->first<<"="<<p->second<<endl;
    }
}
int main()
{
    map<char,string> gta;
    gta['A']="Appy";
    gta['B']="Brown";
    gta['C']="comp";
    gta['I']="Institute";
    showlist(gta);
    gta.erase('A');
    cout<<endl<<"After deleting A"<<endl;
    showlist(gta);
    map<char,string> :: iterator p=gta.find('I');
    cout<<endl<<"Key found"<<" Its key type and value are:  "<<p->first<<"="<<p->second;
    cout<<endl<<"Size of the map is:"<<gta.size();
    return 0;
}
