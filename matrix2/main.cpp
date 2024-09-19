#include <iostream>

using namespace std;

int main()
{
    int rand(void);
    int v[100][100],n;
    int sor,oszlop;
    cin>>n;
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<n;oszlop++){
            v[sor][oszlop]=rand()%100;
            if(sor==oszlop){
                v[sor][oszlop]=0;
            }if(sor>oszlop){
                v[sor][oszlop]=-v[sor][oszlop];
            }
        }
    }
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<n;oszlop++){

            cout<<v[sor][oszlop]<<" ";
        }cout<<endl;
        }
    return 0;
}
