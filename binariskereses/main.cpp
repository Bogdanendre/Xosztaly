#include <iostream>

using namespace std;
int binarskereses(int A[],int bal,int jobb,int keres){
  if(bal>jobb){
    return -1;
  }
  int kozep=(bal+jobb)/2;
  if(A[kozep]==keres){
    return kozep;
  }
  if(A[kozep]>keres){
    return binarskereses(A,bal,kozep-1,keres);
  }
  if(A[kozep]<keres){
    return binarskereses(A,kozep+1,jobb,keres);
  }
    }

int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<binarskereses(A,1,10,5);
    return 0;
}
