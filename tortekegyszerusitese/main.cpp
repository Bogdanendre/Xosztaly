#include <iostream>

using namespace std;

int main()
{
    int szamlalo1,szamlalo2,nevezo,szam1,szam2,S=0;
    cout<<"szamlalo1=";
    cin>>szamlalo1;
    cout<<"szamlalo2=";
    cin>>szamlalo2;

    cout<<"nevezo=";
    cin>>nevezo;
    szam1=szamlalo1+szamlalo2;
    szam2=nevezo;
    S=szam1;
    while(szam1!=szam2){
        if(szam1>szam2){
            szam1=szam1-szam2;
        }else{
            szam2=szam2-szam1;
        }
    }
    S=S/szam1;
    nevezo=nevezo/szam1;
    cout<<"szamlalo="<<S<<endl;
    cout<<"nevezo="<<nevezo;
    return 0;
}
