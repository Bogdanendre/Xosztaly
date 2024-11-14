#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1;
    for(char c:str1){
        if(c=='a'||c=='e'||c=='u'||c=='i'||c=='o'){
            size_t found1=str1.find(c);
            while(found1!=string::npos){
                str1.replace(found1,1,"mpm");
                found1=str1.find(c,found1+3);
            }
        }
    }
   for(char c:str1){
    str2+=c;
    if(c=='p'){
        str2+="Z";
    }
   }

    cout<<str2;
    return 0;
}
