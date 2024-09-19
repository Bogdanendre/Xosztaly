#include <iostream>

using namespace std;

int main()
{
    int v[100][100],n,m;
    int sor,oszlop;
    cin>>n>>m;
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<m;oszlop++){
            cout<<"v["<<sor<<"]["<<oszlop<<"]=";
            cin>>v[sor][oszlop];
        }
    }
     for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<m;oszlop++){
            cout<<v[sor][oszlop]<<" ";
        }cout<<endl;
        }
    return 0;
}
