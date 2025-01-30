#include <iostream>

using namespace std;
bool palindrom(int szam,int hatvany){
    if(szam==0){
        return 0;
    }
    int aux=szam,ujszam=0,szamjegy;
    while(aux>0){
        szamjegy=aux%10;
        aux=aux/10;
        ujszam=ujszam*10+szamjegy;
    }
    if(ujszam==szam){
        return true;
    }
    return false;
}
int main()
{

    return 0;
}
