#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,bcount = 0;
	cin>>a>>b;
	b = a^b;
	while(b>0){
		if(b&1)
			bcount++;
		b = b>>1;
	}
	cout<<bcount<<endl;
	return 0;
}
