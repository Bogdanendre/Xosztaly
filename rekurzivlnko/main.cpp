#include <iostream>

using namespace std;
int lnko(int szam1,int szam2){
    if(szam1==szam2){
        return szam1;
    }
    if(szam1>szam2){
        return lnko(szam1-szam2,szam2);
    }else{
        return lnko(szam1,szam2-szam1);
    }
}
int main()
{
    cout<<lnko(10,15);
    return 0;
}
