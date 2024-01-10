#include <iostream>

using namespace std;

int main()
{
    int szam,szamjegy,S1=0,P=1;
    cin>>szam;
    while(szam>0){
        szamjegy=szam%10;
        if(szamjegy%4==0){
            S1=S1+szamjegy;
        }
        if(szamjegy%5!=0){
            P=P*szamjegy;
        }
        szam=szam/10;
    }
    cout<<"S="<<S1<<endl;
    cout<<"P="<<P;

    return 0;
}
