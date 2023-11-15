#include <iostream>

using namespace std;

int main()
{
    int n,i,S=0;
    cout<<"n=";
    cin>>n;
    for(i=3;i<=n*3;i+=3){

            S=S+i;

    }
    cout<<S;
    return 0;
}
