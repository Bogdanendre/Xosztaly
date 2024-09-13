#include <iostream>

using namespace std;

int main()
{
   int oszto1=-1,oszto2=-1,n;
   bool moderat=true;
   cout<<"n=";
   cin>>n;
   for(int oszto=2;oszto<n/2 + 1;oszto++){
    if(n%oszto==0){
       if(oszto1==-1){
        oszto1=oszto;
       }else if(oszto2==-1){
        oszto2=oszto;
       }else{
        moderat=false;
       }
    }
   }
   if(oszto2==-1){
    moderat=false;
   }
   if(moderat){
    for(int oszto=2;oszto<oszto1/2+1;oszto++){
        if(oszto1%oszto==0){
            moderat=false;
        }
    }
    for(int oszto=2;oszto<oszto2/2+1;oszto++){
        if(oszto2%oszto==0){
            moderat=false;
        }
    }
    for(int i=oszto1+1;i<oszto2;i++){
        bool prim=true;
        for(int oszto=2;oszto<i/2+1;oszto++){
            if(i%oszto==0){
                prim=false;
            }
        }
        if(prim==true){
            moderat=false;
        }
    }
   }
   if(moderat==true){
    cout<<"Moderat";
   }else{
    cout<<"Nem moderat";
   }
    return 0;
}
