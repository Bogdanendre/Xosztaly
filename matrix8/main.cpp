#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int m,n,v[100][100];
    ifstream in("input.txt");
    in>>m;
    in>>n;
    for(int s=0; s<m; s++)
    {
        for(int o=0; o<n; o++)
        {
            in>>v[s][o];
        }
    }
    int S=0,max=999;
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            S=v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1];
            if(S<max)
            {
                max=S;
            }
        }
    }
    cout<<max;
    return 0;
}
