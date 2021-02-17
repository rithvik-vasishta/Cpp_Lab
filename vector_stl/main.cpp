#include <iostream>
#include<vector>
using namespace std;

void showlist(vector <int> l)
{
    vector<int>::iterator p=l.begin();
    for(;p!=l.end();p++)
        cout<<* p<<" ";
}
int main()
{
    vector <int> arr;
    for(int i=1;i<=5;i++)
        arr.push_back(i);
    cout<<"After pushing elements: ";
    showlist(arr);
    arr.erase(arr.end()-1,arr.end());
    cout<<endl<<"After deleting last element: ";
    showlist(arr);
    cout<<endl<<"Size of vector:"<<arr.size();
    arr.clear();
    cout<<endl<<"Vector cleared";
    showlist(arr);


    return 0;
}
