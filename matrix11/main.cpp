#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int n,v[50][50],t[50][50],szorzat[20][20];
    ifstream in("in.txt");
    ofstream out("out.txt");
    cin>>n;
    for(int s=0; s<n; s++)
    {
        for(int o=0; o<n; o++)
        {
            in>>v[s][o];
        }
    }
     for(int s=0; s<n; s++)
    {
        for(int o=0; o<n; o++)
        {
            in>>t[s][o];
        }
    }
     for(int s=0; s<n; s++)
    {
        for(int o=0; o<n; o++)
        {
            szorzat[s][o]=0;
            for(int index=0;index<n;index++){
                szorzat[s][o]+=v[s][index]*t[index][o];
            }
        }
    }
     for(int s=0; s<n; s++)
    {
        for(int o=0; o<n; o++)
        {
            out<<v[s][o]<<" ";
        }
        out<<endl;
    }
    return 0;
}
