#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i = 0 ; i < n ; ++i)
		cin>>a[i];
	int max = 0 , curSum, lindex ,rindex;
	for(int i = 0 ; i < n ; ++i){
		for(int j = i ; j < n ; ++j){
			curSum = 0;
			for(int k = i ; k <= j ; ++k)
				curSum+=a[k];
			if(max < curSum){
				max = curSum;
				lindex = i;
				rindex = j;
			}
		}
	}
	cout<<max<<endl<<"[ ";
	
	for(int i = lindex ; i < rindex ; ++i)
		cout<<a[i]<<" , ";
	cout<<a[rindex]<<" ]"<<endl;
	return 0;
}
