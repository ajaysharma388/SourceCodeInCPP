#include <iostream>
using namespace std;

float findSqrt(int n,int p){
	int s=0,e=n,m;
	float ans;
	while(s<=e){
		m=(s+e)/2;
		if(m*m==n){
			ans=m;
			break;
		}else if(m*m<n){
			ans=m;
			s=m+1;
		}else e=m-1;
	}
	float inc=1.0/10;
	while(p>0){
		while(ans*ans<n) ans+=inc;
		if(ans*ans==n) break;
		else ans-=inc;
		inc/=10.0;
		p--;
	}
	return ans;
}

int main() {
	// your code goes here
	int n,p;
	cin>>n>>p;
	cout<<findSqrt(n,p)<<endl;
	return 0;
}

// time compexity will be O(log 2(n)+p)
// space complexity will be O(1)
