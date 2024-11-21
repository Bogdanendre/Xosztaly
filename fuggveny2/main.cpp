#include <iostream>

using namespace std;

bool prim(int szam){

for(int oszto=2;oszto<szam/2+1;oszto++){
        if(szam%oszto==0){
            return false;
        }
    }
 return true;
}
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
int lnkovizs(int szam,int szam1){
while(szam!=szam1){
    if(szam>szam1){
        szam=szam-szam1;
    }else{
        szam1=szam1-szam;
    }
}
}
int main()
{
    int a,b;
    int n;
    cout<<"Menu"<<endl;
    cout<<"Mit szeretnel csinalni?"<<endl;
    cout<<"1. Megvizsgalni, hogy egy szam prim-e"<<endl;
    cout<<"2. Megvizsgalni, hogy egy szam pallindrom-e"<<endl;
    cout<<"3. Megkeresni ket szam legnagyobb kozos osztojat"<<endl;
    cout<<"0. Kilepni"<<endl;
    cin>>n;
    if(n==1){
       cout<<"szam=";
       cin>>a;
        if(prim(a)){
        cout<<a<<" prim";
    }else{
        cout<<a<<" nem prim";
    }
    }
    if(n==2){
        cout<<"szam=";
        cin>>a;
        if(palindrom(a)){
        cout<<a<<" palindrom";
    }else{
        cout<<a<<" nem palindrom";
    }
    }
    if(n==3){
        cout<<"szam1=";
        cin>>a;
        cout<<"szam2=";
        cin>>b;
        cout<<"lnko="<<lnkovizs(a,b);
    }
    if(n==0){
        return 0;
    }
    return 0;
}
