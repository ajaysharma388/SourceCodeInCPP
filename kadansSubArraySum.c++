#include <iostream>
using namespace std;
int kadansAlgorithm(int *a,int n){
    int maxSum = 0 , currentSum = 0;
    for(int i = 0 ; i < n ; ++i)
        if(currentSum+a[i] > 0){
            currentSum+=a[i];
            if(maxSum < currentSum)
                maxSum = currentSum;
        }
    return maxSum;
}
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i = 0 ; i < n ; i++)
            cin>>a[i];
        cout<<kadansAlgorithm(a,n)<<endl;
    }
    return 0;
}
