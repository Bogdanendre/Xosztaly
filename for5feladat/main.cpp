#include <iostream>

using namespace std;

int main()
{
    int n,S=0,szam,paros=0;
    double atlag=0;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"szam=";
        cin>>szam;
        if(szam%2==0){
            S=S+szam;
            paros++;
        }
        atlag=S/paros;
}
cout<<atlag;
return 0;
}
