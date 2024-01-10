#include <iostream>

using namespace std;

int main()
{
    int szam;
    bool prim=true;
    cout<<"szam=";
    cin>>szam;
    for(int oszto=2;oszto<szam/2+1;oszto++){
        if(szam%oszto==0){
            prim=false;
        }
    }
    if(prim==true){
        cout<<"a szam prim";
    }else{
        cout<<"a szam nem prim";
    }
    return 0;
}
