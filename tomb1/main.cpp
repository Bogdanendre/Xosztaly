#include <iostream>

using namespace std;

int main()
{
    int n,index,tomb[100];
    cout << "n=";
    cin>>n;
    for(index=0;index<n;index++){
        cout<<"tomb["<<index<<"]=";
        cin>>tomb[index];
    }
    for(index=0;index<n;index++){
        cout<<tomb[index]<<" ";
    }
    return 0;
}
