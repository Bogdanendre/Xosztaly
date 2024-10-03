#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("out.txt");
    int n,v[100][100],s,o,m,szimm=0;
    cin>>m;
    cin >>n;
  while(n%2==0){
    cin>>n;
  }

    for(s=0; s<m; s++)
    {
        for(o=0; o<n; o++)
        {
            in>>v[s][o];
        }
    }
    int seged=n;
    for(s=0; s<m; s++)
    {
        n=n-1;
        for(o=0; o<n; o++)
        {
            if(v[s][o]==v[s][n]){
                n=n-1;
                szimm++;
            }
        }
        n=seged;

    }
    if(szimm==m*(n/2)){
        out<<"DA";
    }else{
        out<<"NU";
    }
return 0;
}




