#include <iostream>

using namespace std;

int main()
{
    int n,i,t[100];
    cout << "n=";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"t["<<i<<"]=";
        cin>>t[i];
    }
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
