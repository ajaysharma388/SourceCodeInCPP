#include <iostream>

using namespace std;

int main()
{
    int x,Va,Vb,Pa,Pb,t=0;
    cin>>x;
    cin>>Va>>Vb;
    Pa = 0;
    Pb = x;
    while(Pa!=Pb){
        t++;
        Pa+=Va;
        Pb+=Vb;
    }
    cout<<2*t;
    return 0;
}
