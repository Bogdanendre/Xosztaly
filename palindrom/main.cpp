#include <iostream>

using namespace std;

int main()
{
    int szam,forditott=0,seged,szamjegy;
    cout<<"szam=";
    cin>>szam;
    seged=szam;
    while(seged>0){
        szamjegy=seged%10;
        seged=seged/10;
        forditott=forditott*10+szamjegy;
    }
    if(forditott==szam){
        cout<<"palindrom";
    }else{
        cout<<"nem palindrom";
    }
    return 0;
}
