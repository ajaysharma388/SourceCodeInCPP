#include <iostream>

using namespace std;

int main()
{
    int n,sum = 0,maxSum = 0,currentSum = 0,left = -1,right = -1;
    cin>>n;
    int *a = new int[n];
    int *cs = new int[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        sum+=a[i];
        cs[i] = sum;
    }
    for(int i = 0 ; i < n ; ++i){
        for(int j = i ; j < n ; ++j){
            currentSum = cs[j] - cs[i-1];
            if(maxSum < currentSum){
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout<<maxSum<<endl<<"[ ";
	for(int i = left ; i < right ; ++i)
		cout<<a[i]<<" , ";
	cout<<a[right]<<" ]"<<endl;
	return 0;
}
