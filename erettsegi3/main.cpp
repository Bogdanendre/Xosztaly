#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int m,n,v[30][30];
    ifstream in("in.txt");
    in>>m;
    in>>n;
    for(int s=0; s<m; s++)
    {
        for(int o=0; o<n; o++)
        {
            in>>v[s][o];
        }
    }
    for(int s=0 ; s<m; s++)
    {
        int max=-999;
        int maxoszlop=-1;
        for(int o=0; o<n; o++)
        {
            if(v[s][o]>max)
            {
                max=v[s][o];
                maxoszlop=o;
            }
        }
        cout<<s+1<<":"<<maxoszlop+1<<endl;
    }
    return 0;
}
