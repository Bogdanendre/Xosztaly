#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    int pos;
    cout<<"szo ";
    cin>>str1;
    cout<<"beszurando szo ";
    cin>>str2;
    cout<<"pos=";
    cin>>pos;
    str1.insert(pos,str2);
    cout<<str1;
    return 0;
}
