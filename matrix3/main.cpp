#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m[100][100],sor,oszlop,E=0,K=0,D=0,Ny=0;
    ifstream in("input.txt");
    cin>>n;
     for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<n;oszlop++){
           in>>m[sor][oszlop];
        }
    }
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<n;oszlop++){
            if(oszlop>sor&&sor+oszlop<n-1){
                E=E+m[sor][oszlop];
            }
            if(oszlop>sor&&sor+oszlop>n-1){
                K=K+m[sor][oszlop];
            }
            if(oszlop<sor&&sor+oszlop>n-1){
                D=D+m[sor][oszlop];
            }
            if(oszlop<sor&&sor+oszlop<n-1){
                Ny=Ny+m[sor][oszlop];
            }
        }
        }
        cout<<E<<" "<<K<<" "<<D<<" "<<Ny;
    return 0;
}
