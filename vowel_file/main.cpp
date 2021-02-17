#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    fstream y,x;
    string s;
    int co=0;
    int pos[5][10]={0};
    int vowel_count[5]={0};
    char vowel[5]={'A','E','I','O','U'};
    cout<<"enter string:"<<endl;
    getline(cin,s);
    y.open("text.txt",ios::out|ios::app);
    y<<s;
    y.close();
    y.open("text.txt",ios::in);
    while(!y.eof())
    {
       char c;
       y>>c;
       cp++;
       if((c=='A')||(c=='a'))
            pos[0][vowel_count[0]++]=co;
       else if((c=='E')||(c=='e'))
            pos[1][vowel_count[1]++]=co;
            else if((c=='I')||(c=='i'))
            pos[2][vowel_count[2]++]=co;
            else if((c=='O')||(c=='o'))
            pos[3][vowel_count[3]++]=c;
            else if((c=='U')||(c=='u'))
            pos[4][vowel_count[4]++]=co;
    }
    x.open("position.txt",ios::in);
    x<<"Vowel\tCount\tPosition\n";
    for(int i=0;i<5;i++)
    {
        x<<vowel[i]<<"\t"<<vowel_count[i]<<"\t";
        for(int j=0;j<vowel_count[i];j++)
            x<<pos[i][j]<<",";
        x<<"\n";
    }
    return 0;
}
