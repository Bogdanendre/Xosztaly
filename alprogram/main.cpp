#include <iostream>

using namespace std;
void divprim(int n,int &s){
    s=0;
    int nr=0;
    for(int oszto=2;oszto<=n;oszto++){
        nr=0;
        while(n%oszto==0){
            n=n/oszto;
            nr++;
        }
        if(nr%2==1){
            s=s+oszto;
        }
    }
}
int main()
{
    int s;
    divprim(360,s);
    cout<<s;
    return 0;
}
