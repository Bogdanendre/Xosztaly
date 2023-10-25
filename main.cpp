#include <iostream>

using namespace std;

int main()
{
    int a,b,c,p=1;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    if(a%2==0)
    {
        p=p * a;
    }
    if(b%2==0)
    {
        p=p * b;
    }
    if(c%2==0)
    {
        p=p * c;
    }
    cout<<"P="<<p;
    return 0;
}
