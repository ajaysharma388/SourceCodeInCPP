#include <iostream>
using namespace std;

float findSqrt(int n,int p){
	int s=0,e=n,m,ans;
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
	float sq=(float)ans,inc=1.0/10;
	if(sq*sq==n) return sq;
	else{
		while(p>0){
			sq+=inc;
			while(sq*sq<n) sq+=inc;
			if(sq*sq==n) break;
			else sq-=inc;
			inc/=10.0;
			p--;
		}
		return sq;
	}
}
int main() {
	// your code goes here
	int n,p;
	cin>>n>>p;
	cout<<findSqrt(n,p)<<endl;
	return 0;
}
