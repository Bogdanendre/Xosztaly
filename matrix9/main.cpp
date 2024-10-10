#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int N,M,v[50][50];
    ifstream in("input.txt");
    ofstream out("output.txt");
    in>>N>>M;
    for(int s=0; s<N; s++)
    {

        for(int o=0; o<M; o++)
        {
            in>>v[N][M];
        }
    }
    for(int s=0; s<N; s++)
    {
        for(int o=0; o<M; o++)
        {
            if(v[N][M]<4)
            {
                out<<"1 ";
            }
            else
            {
                bool prim=true;
                for(int oszto=2; oszto<=v[N][M]/2+1; oszto++)
                {
                    if(v[N][M]%oszto==0)
                    {
                        prim=false;
                    }
                }
                if(prim==true)
                {
                    out<<"1 ";
                }
                else
                {
                    out<<"0 ";
                }
            }
        }
        out<<endl;
    }


    return 0;
}
