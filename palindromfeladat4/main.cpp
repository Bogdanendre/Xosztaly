#include <iostream>

using namespace std;

int main()
{
    int szam,forditott=0,seged,szamjegy,n,max=-99999999,min=99999999,lkkt;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"szam=";
        cin>>szam;
    seged=szam;
    while(seged>0){
        szamjegy=seged%10;
        seged=seged/10;
        forditott=forditott*10+szamjegy;
    }
    if(forditott!=szam){
        if(szam>max){
            max=szam;
        }
        if(szam<min){
            min=szam;
        }
    }
    }
    lkkt=max*min;
    while(max!=min){
        if(max>min){
            max=max-min;
        }else{
            min=min-max;
        }
    }
    lkkt=lkkt/max;
    cout<<"a legisebb kozos tobbszoros "<<lkkt;
    return 0;
}
