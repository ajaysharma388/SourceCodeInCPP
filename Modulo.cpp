#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m,n;
	long long x = 1;
	cin>>m>>n;
	for(int i = 2 ; i <= m ; ++i)
		x = (x*i) % n;
	cout<<x%n<<endl;
	return 0;
}
