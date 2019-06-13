#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m,n;
	cin>>m;
	int ar1[m];
	for(int i = 0 ; i < m ; ++i){
		cin>>ar1[i];
	}
	cin>>n;
	int ar2[n];
	for(int i = 0 ; i < n ; ++i){
		cin>>ar2[i];
	}
	int temp = 0, carry = 0;
	if(n > m){
		for(int i = m-1 ; i >= 0 ; --i){
			temp = ar2[n-m+i]+ar1[i]+carry;
			carry = 0;
			ar2[n-m+i] = temp%10;
			if(temp>9){
				carry = temp/10;
			}
		}
		for(int i = 0 ; i < n ; ++i)
            cout<<ar2[i]<<", ";
        cout<<"END"<<endl;
    }else if(m > n){
        for(int i = n-1 ; i >= 0 ; --i){
			temp = ar1[m-n+i]+ar2[i]+carry;
			carry = 0;
			ar1[m-n+i] = temp%10;
			if(temp>9){
				carry = temp/10;
			}
		}
		for(int i = 0 ; i < m ; ++i)
            cout<<ar1[i]<<", ";
        cout<<"END"<<endl;
    }else{
        for(int i = n-1 ; i >= 0 ; --i){
			temp = ar1[i]+ar2[i]+carry;
			carry = 0;
			ar1[i] = temp%10;
			if(temp>9){
				carry = temp/10;
			}
		}
		if(carry>0)
            cout<<carry<<", ";
		for(int i = 0 ; i < m ; ++i)
            cout<<ar1[i]<<", ";
        cout<<"END"<<endl;
    }
	return 0;
}
