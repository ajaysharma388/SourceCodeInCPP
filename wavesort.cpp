#include <iostream>
using namespace std;

void print(int *a,int n){
	for(int i=0;i<n;++i)
		cout<<a[i]<<" ";
	cout<<endl;
}

void waveSort(int *a,int n){
	for(int i=0;i<n;i+=2){
		if(i-1>=0 && a[i-1]>a[i])
			swap(a[i-1],a[i]);
		if(i+1<=n-1 && a[i+1]>a[i])
			swap(a[i+1],a[i]);
	}
	return;
}

int main() {
	// your code goes here
	int a[] = {1,3,4,2,7,8};
	int n=6;
	waveSort(a,n);
	print(a,n);
	return 0;
}
