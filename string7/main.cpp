#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo="az almafa iden sok almat termett, amibol almalevet keszitettunk",beszur="alma";
    int counter=0;
    size_t found=szo.find(beszur);
    while(found!=string::npos){
        counter++;
        found=szo.find(beszur,found+1);
    }
    cout<<counter;
    return 0;
}
