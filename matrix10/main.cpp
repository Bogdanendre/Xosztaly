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
            in>>v[s][o];
        }
    }

    for(int s=0; s<N; s++)
    {

        for(int o=0; o<M; o++)
        {
            if(v[s][o]<10)
            {
                out<<"1 ";
            }
            else
            {
                int forditott=0,seged;
                seged=v[s][o];
                while(seged>0)
                {
                    int szamjegy=seged%10;
                    seged=seged/10;
                    forditott=forditott*10+szamjegy;
                }
                if(forditott==v[s][o])
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
