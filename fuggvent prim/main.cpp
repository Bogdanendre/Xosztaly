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
int main()
{
    int a;
    cin>>a;
    if(prim(a)){
        cout<<a<<" prim";
    }else{
        cout<<a<<" nem prim";
    }
    return 0;
}
