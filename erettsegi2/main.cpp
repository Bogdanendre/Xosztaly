#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("out.txt");
    int n,v[100][100],s,o;
    int m;

    in >>m;
    in >>n;
    for(s=0; s<m; s++)
    {
        for(o=0; o<n; o++)
        {
            in >> v[s][o];
        }
    }
    for(s=1; s<m; s+=2)
    {
        int min=v[s][0];
        for(o=0; o<n; o++)
        {
            if(min>v[s][o])
            {
                min=v[s][o];
            }
        }
        for(o=0; o<n; o++)
        {
            if(v[s-1][o]>min-1)
            {
                v[s-1][o]=min-1;
            }
        }
    }
    for(s=0; s<m; s++)
    {
        for(o=0; o<n; o++)
        {
            out<<v[s][o]<<" ";
        }
        out<<endl;
    }
    return 0;
}
