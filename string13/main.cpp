#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cin>>str1;
    size_t found=str1.find("m");
    while(found!=string::npos){
        str1.replace(found,1,"mpm");
        found=str1.find("m",found+3);
    }
    cout<<str1;
    return 0;
}
