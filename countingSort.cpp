#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[100],n,max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(max<a[i])
			max=a[i];
	}
	int ocurrenceArr[max+1]={};
	for(int i=0;i<n;i++){
		ocurrenceArr[a[i]]++;
	}
	int j=0;
	for(int i=0;i<max+1;++i)
		while(ocurrenceArr[i]>0){
			a[j] = i;
			ocurrenceArr[i]--;
			j++;
		}
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
