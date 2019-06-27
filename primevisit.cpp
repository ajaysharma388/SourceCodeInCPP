#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return false;
    return true;
}
void createPrimeList(int *sieve){
    sieve[0]=-1,sieve[1]=-1;
    int i=2,inc;
    while(i<=100000){
        if(isPrime(i) && sieve[i]>-1){
            sieve[i] = 1;
            inc=2*i;
            while(inc<100000){
                sieve[inc]=-1;
                inc+=i;
            }
        }
        i++;
    }
}


int main(){
    int sieve[100000] = {};
    createPrimeList(sieve);
    int testCases;
    cin>>testCases;
    while(testCases--){
        int a,b,city=0;
        cin>>a>>b;
        for(int i=a;i<b;++i)
            if(sieve[i]>-1)
                city++;
        cout<<city<<endl;
    }
    return 0;
}
