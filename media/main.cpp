#include <iostream>

using namespace std;
class media
{
protected:
    string title;
    int price;
public:
    virtual void show() = 0;
    media(string t,int p):title(t),price(p){}
};
class page:public media
{
    int pages;
public:
    page(string t,int p,int pa):media(t,p){pages=pa;}
    void show()
    {
        cout<<"Book name: "<<title<<endl;
        cout<<"Book price: "<<price<<endl;
        cout<<"Book pages: "<<pages<<endl;
    }
};
class tim : public media
{
    int ti;
public:
    tim(string t,int p,int tt):media(t,p){ti=tt;}
    void show()
    {
       cout<<"Video tape name: "<<title<<endl;
        cout<<"Video tape price: "<<price<<endl;
       cout<<"Video tape length: "<<ti<<endl;
    }

};
int main()
{
    page p("ab",1000,100);
    tim t("bc",2000,30);
    p.show();
    t.show();
    return 0;
}
