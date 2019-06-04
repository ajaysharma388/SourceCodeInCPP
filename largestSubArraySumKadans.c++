#include <iostream>
using namespace std;

int main()
{
    int n,maxSum = 0,currentSum = 0;
    cin>>n;
    int *a = new int[n];
    for(int i = 0 ; i < n ; i++)
        cin>>a[i];
    for(int i = 0 ; i < n ; ++i)
        if(currentSum+a[i] > 0){
            currentSum+=a[i];
            if(maxSum < currentSum)
                maxSum = currentSum;
        }
    cout<<maxSum<<endl;
    return 0;
}
