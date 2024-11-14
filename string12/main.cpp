#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    int a=1;

    getline(cin,str1);
    for(char c:str1){
        if(c==' '){
            a++;
        }
    }
    cout<<a;
    return 0;
}
