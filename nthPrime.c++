#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    bool flag;
    cin>>n;
    for(int i = 2 ; i < sqrt(100000000) ; ++i){
        flag = false;
        for(int j = 2 ; j <= sqrt(i) ; ++j){
            if(i % j == 0){
                flag = true;
                break;
            }
        }
        if(flag == false)
            n--;
        if(n == 0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
