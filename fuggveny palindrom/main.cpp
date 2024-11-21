#include <iostream>

using namespace std;
bool palindrom(int szam){
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
    int a;
    cin>>a;
    if(palindrom(a)){
        cout<<a<<" palindrom";
    }else{
        cout<<a<<" nem palindrom";
    }
    return 0;
}
