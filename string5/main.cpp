#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo,beszur;

    cout<<"szo ";
    cin>>szo;
    cout<<"beszurando szo ";
    cin>>beszur;

    szo.append(beszur);
    cout<<szo;
    return 0;
}
