#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,temp;
    cin>>n;
    temp = n;
    int digits = 0;
    while(temp>0){
        temp/=10;
        digits++;
    }
    temp = digits;
    int *num = new int[digits];
    temp--;
    while(n>0){
        num[temp] = n%10;
        n/=10;
        temp--;
    }
    if((9-num[0]) < num[0] && num[0] != 9)
        num[0] = 9 - num[0];
    for(int i = 1 ; i < digits ; ++i){
        if((9-num[i]) < num[i])
            num[i] = 9 - num[i];
    }
    for(int i = 0 ; i < digits ; ++i)
        cout<<num[i];
    cout<<endl;
    return 0;
}
