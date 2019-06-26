#include <iostream>
using namespace std;
// 1 8 20 4 1 2 3 4 2 10
int findBitonicArray(int*arr,int n){
    int dec[n],inc[n];
    int i,maximum;
    inc[0] = 1;
    dec[n-1] = 1;
    for(int i=1;i<n;++i)
        inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1;
    for(int i=n-2;i>=0;--i)
        dec[i] = (arr[i] >= arr[i+1])? dec[i+1] + 1: 1;
    maximum = inc[0] + dec[0] - 1;
    for (i = 1; i < n; i++)
        if (inc[i] + dec[i] - 1 > maximum)
            maximum = inc[i] + dec[i] - 1;
    return maximum;
}

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;++i)
            cin>>a[i];
        cout<<findBitonicArray(a,n)<<endl;
    }
    return 0;
}
