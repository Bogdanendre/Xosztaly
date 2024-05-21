#include <iostream>

using namespace std;

int main()
{
    int szamlalo1,szamlalo2,nevezo1,nevezo2,szam1,szam2,S=0,lkkt,nevezo;
    cout<<"szamlalo1=";
    cin>>szamlalo1;
    cout<<"szamlalo2=";
    cin>>szamlalo2;

    cout<<"nevezo1=";
    cin>>nevezo1;
    cout<<"nevezo2=";
    cin>>nevezo2;
    szam1=nevezo1;
    szam2=nevezo2;
    lkkt=szam1*szam2;

    while(szam1!=szam2)
    {
        if(szam1>szam2)
        {
            szam1=szam1-szam2;
        }
        else
        {
            szam2=szam2-szam1;
        }
    }
    lkkt=lkkt/szam1;
    nevezo1=lkkt/nevezo1;
    nevezo2=lkkt/nevezo2;
    szamlalo1=szamlalo1*nevezo1;
    szamlalo2=szamlalo2*nevezo2;
    S=szamlalo1+szamlalo2;
    szam1=lkkt;
    szam2=S;
    while(szam1!=szam2)
    {
        if(szam1>szam2)
        {
            szam1=szam1-szam2;
        }
        else
        {
            szam2=szam2-szam1;
        }
    }
    S=S/szam1;
    lkkt=lkkt/szam1;
    cout<<"szamlalo="<<S<<endl;
    cout<<"nevezo="<<lkkt;
    return 0;
}
