#include <iostream>

using namespace std;

int main(){

   bool  primek[10000];
   int n;
   cout<<"n=";
   cin>>n;
   for(int i=2;i<n;i++){
    primek[i]=true;
   }
   primek[0]=false;
   primek[1]=false;
   for(int i=2;i<n;i++){
    if(primek[i]){
        for(int kihuz=i+i;kihuz<n;kihuz+=i){
            primek[kihuz]=false;
        }
    }
   }
   for(int i=2;i<n;i++){
    if(primek[i]){
        cout<<i<<" ";
    }
   }
    return 0;
}
