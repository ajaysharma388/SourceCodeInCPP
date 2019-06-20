#include <iostream>
using namespace std;

int findNumber(int *a,int n,int i){
	if(i == n-1)
		return a[i];
	return a[i]^findNumber(a , n ,i+1);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i = 0 ; i < n ; ++i)
		cin>>arr[i];
	cout<<findNumber(arr,n,0);
	return 0;
}
