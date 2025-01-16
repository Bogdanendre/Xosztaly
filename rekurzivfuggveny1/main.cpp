#include <iostream>

using namespace std;
int paratlan(int n);
int paros(int n)
{
    return n+paratlan(n-1);
}
int paratlan(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+paratlan(n-1);
}
int main()
{
    int x;
    cin>>x;
    if(x%2==0)
    {
        cout<<paros(x);
    }
    else
    {
        cout<<paratlan(x);
    }
    return 0;
}
