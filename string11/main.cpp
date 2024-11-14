#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str2);
    cin>>str1;
    size_t found=str2.find(str1);
    if(found==0){
        cout<<"nincs benne";
    }else{
        cout<<found;
    }








    return 0;
}
