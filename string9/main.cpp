#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo,beszur;
    int hova;
    int pos;
    cout<<"szo ";
    cin>>szo;
    cout<<"beszurando szo ";
    cin>>beszur;
    cout<<"pos=";
    cin>>pos;
    cout<<"hova? ";
    cin>>hova;
    szo.replace(pos,hova,beszur);
    cout<<szo;
    return 0;
}
