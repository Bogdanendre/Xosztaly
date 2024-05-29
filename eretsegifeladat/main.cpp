#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int n,t[100];
    fstream in("bac.txt");
    in>>n;
    bool paritar= true;
    for(int i=0;i<2*n;i++){
        in>>t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=n;j<2*n;j++){
            if(((t[i]%2 != t[j]%2)&&(t[i]>t[j]))){
                paritar=false;
            }
        }
    }
    if(paritar){
        cout<<"DA";
    }else{
        cout<<"NU";
    }

    return 0;
}
