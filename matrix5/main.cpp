#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("out.txt");
    int n,m[100][100],s,o;
    in >>n;
    for(s=0;s<n+1;s++){
        for(o=s+1;o<n;o++){
            in>>m[s][o];
            m[o][s]=m[s][o];
        }
    }
     for(s=0;s<n;s++){
        for(o=0;o<n;o++){
            if(s==o){
                m[s][o]=1;
            }
            if(s+o==n-1){
                m[s][o]=1;
            }
        }
    }
         for(s=0;s<n;s++){
        for(o=0;o<n;o++){
            out<<m[s][o]<<" ";
        }out<<endl;
        }return 0;
    }




