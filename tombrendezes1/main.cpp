#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,t[100],i;
    n=10;
      for( i=0;i<n;i++){
        t[i]=rand()%100;
    }
      for( i=0;i<n;i++){
       cout<<t[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(t[i]>t[j]){
                int csere=t[i];
                t[i]=t[j];
                t[j]=csere;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<t[i]<<" ";
    }
    return 0;
}
