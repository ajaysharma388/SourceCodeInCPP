#include <iostream>
using namespace std;

bool canPay(int *a,int val,int i){
    int sum = 0,k = 0;
    while(i){
        if(i&1)
            sum+=a[k];
        k++;
        i=i>>1;
    }
    if(sum==val)
        return true;
    return false;
}
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n,k;
        bool flag = false;
        cin>>n>>k;
        int *arr = new int[n];
        for(int i = 0; i < n ; ++i)
            cin>>arr[i];
        for(int i=0;i<(1<<n);++i){
            if(canPay(arr,k,i+1)){
                flag = true;
                break;
            }
        }
        cout<<endl;
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
