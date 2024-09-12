#include <iostream>

using namespace std;

int main()
{
    int m=100;
    int primszam[m];
    int index=0;
    int moderat,szorzat=1,seged;
    cin>>moderat;
    for(int szam=2; szam<=m; szam++)
    {
        bool prim=true;
        for(int oszto=2; oszto<szam/2+1; oszto++)
        {

            if(szam%oszto==0)
            {
                prim=false;
            }

        }
        if(prim==true){
           primszam[index]=szam;
           index++;
        }
         seged=index;
    }
    for(int i=0;i<seged;i++){
       bool szorzat=true;
        for (int j = i; j <= seged; j++){
            szorzat=szorzat*primszam[j];
            if(szorzat!=moderat){
                szorzat=false;
            }else{
                szorzat=true;
        }
    }
    if(szorzat==true){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}
}
