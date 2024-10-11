#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int m[30][30],n;
    ifstream in("input.txt");
    in>>n;
    for(int s=0; s<n; s++)
    {

        for(int o=0; o<n; o++)
        {
            in>>m[s][o];
        }
    }
    cout<<"Elso sor:";
    for(int o=0; o<n; o++)
    {
        cout<<m[0][o]<<" ";
    }
    cout<<endl;
    cout<<"Utolso sor:";
    for(int o=0; o<n; o++)
    {
        cout<<m[n-1][o]<<" ";
    }
    cout<<endl;
    cout<<"Elso oszlop:";
    for(int s=0; s<n; s++)
    {
        cout<<m[s][0]<<" ";
    }
    cout<<endl;
    cout<<"Utolso oszlop:";
    for(int s=0; s<n; s++)
    {
        cout<<m[s][n-1]<<" ";
    }
    return 0;
}
