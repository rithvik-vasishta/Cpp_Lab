#include <iostream>
#include<list>
using namespace std;
void show(list <int> l)
{
   list <int>:: iterator p;
   for(p=l.begin();p!=l.end();++p)
    cout<<endl<<*p;
}
int main()
{
    list <int> list1;
    for(int i=6;i<=10;i++)
        list1.push_back(i);
    cout<<"After pushing back: "<<endl;
    show(list1);
    for(int i=6;i>=1;i--)
        list1.push_front(i);
    cout<<"After pushing front: "<<endl;
    show(list1);
    list1.unique();
    cout<<endl<<"after removal of duplicates: "<<endl;
    show(list1);
    list1.pop_front();
    list1.pop_back();
    cout<<endl<<"After popping at front and back end: "<<endl;
    show(list1);
    list1.remove(6);
    cout<<endl<<"List after 6 is being erased: "<<endl;
    show(list1);
    list1.reverse();
    cout<<endl<<"List after Reversing: "<<endl;
    show(list1);
    list <int> list2;
    for(int i=10;i<=15;i++)
        list2.push_front(i);
    cout<<endl<<"Second list is: "<<endl;
    show(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<endl<<"After sorting and merging: "<<endl;
    show(list1);
    return 0;

}
