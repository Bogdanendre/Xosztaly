#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo;

    int n=0;
    cin>>szo;
    for(char c:szo){
        if(c=='a'){
            n++;
        }
    }
    cout<<n;
    return 0;
}
