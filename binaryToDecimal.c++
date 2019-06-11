#include <iostream>

using namespace std;

int main()
{
    int s;
    cin>>s;
    int pow = 0,sum = 0;
    while(s>0){
        sum+=((s%10)*(1<<pow));
        s/=10;
        pow++;
    }
    cout<<sum<<endl;
    return 0;
}
