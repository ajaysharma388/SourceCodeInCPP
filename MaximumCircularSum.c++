#include <iostream>
using namespace std;

int kadansMax(int *a,int n){
    int sum = 0,currSum = 0;
    for(int i=0;i<n;++i){
        currSum+=a[i];
        if(currSum<0)
            currSum = 0;
        if(sum<currSum)
            sum = currSum;
    }
    return sum;
}

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k = kadansMax(arr,n);
        int wrap = 0;
        for(int i = 0;i<n;++i){
            wrap+=arr[i];
            arr[i] = -arr[i];
        }
        wrap+=kadansMax(arr,n);
        (wrap>k)?cout<<wrap<<endl:cout<<k<<endl;
    }
    return 0;
}
