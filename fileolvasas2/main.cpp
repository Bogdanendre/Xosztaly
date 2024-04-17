#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,i,n,szamlalo=0,atlag=0,felevi,jegy;
    ifstream myfile("input.txt");
    ofstream file("output.txt");
    while(myfile >> jegy)
    {

        atlag+=jegy;
        szamlalo++;

    }
    myfile.close();
    felevi=jegy;
    szamlalo-=1;
    atlag-=felevi;
    atlag/=szamlalo;
    atlag*=3;
    atlag+=felevi;
    atlag/=4;
    file << atlag << endl;
    file.close();


    return 0;
}
