#include <iostream>
using namespace std;
#define ll long long int 

bool isValidConfig(ll books[],ll n,ll k,ll page){
	ll s=1,currPages=0;
	for(ll i=0;i<n;++i)
		if(currPages+books[i]>page){
			s++;
			currPages=books[i];
			if(s>k)
				return false;
		}else{
			currPages+=books[i];
		}
	return true;
}

int main(){
	ll testcases,n,m,start=0,end=0,currSol;
	cin>>testcases;
	while(testcases--){
		cin>>n>>m;
		ll books[n];
		for(ll i=0;i<n;++i){
			cin>>books[i];
			end+=books[i];
		//start = max(start,books[i]);
		/*
			-> since the array is sorted we can also say 
			   start = books[n-1];	
		*/
		}	
		start=books[n-1];
		while(start<=end){
			ll mid=(start+end)/2;
			if(isValidConfig(books,n,m,mid)){
				currSol=mid;
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
		cout<<currSol<<endl;
	}
	return 0;
}
