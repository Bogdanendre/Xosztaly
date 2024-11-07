#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo;
    int a;
    cin>>szo;
    a=szo.size();
    for(int i=0;i<a;i++){
        cout<<szo[i]<<"   ";
    }
    return 0;
}
