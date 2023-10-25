#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max=-9999999;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    if(max<a){
        max=a;
    }
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    cout<<max;
    return 0;
}
