#include <iostream>

using namespace std;
int divprim(int n)
{
    int seged1,seged2;
    int nr=0;
    for(int oszto=2; oszto<=n; oszto++)
    {

        nr=0;
        while(n%oszto==0)
        {
            n=n/oszto;
            nr++;
        }
        int minnr=nr;
        seged1=oszto;

        if(minnr>nr)
        {
            minnr=nr;
            if(seged1<oszto){
                seged2=seged1;
            }

        }
    }
return seged1;
}
int main()
{
    int n;
    cin>>n;
    cout<<divprim(n);
    return 0;
}
