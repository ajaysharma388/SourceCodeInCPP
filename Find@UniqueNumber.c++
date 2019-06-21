#include <iostream>
using namespace std;

void findTwoUniqueNumber(int *a,int n){
    int res = 0;
    for(int i = 0 ; i < n ; ++i){
        res = res^a[i];
    }
    int k = 0,temp = res;
    while(temp){
        if(temp&1)
            break;
        k++;
        temp = temp>>1;
    }
    int mask = (1<<k),firstNumber = 0;
    for(int i = 0 ; i < n ;++i){
        if(mask&a[i]){
            firstNumber = firstNumber^a[i];
        }
    }
    cout<<firstNumber<<" "<<(firstNumber^res)<<endl;
}
int main()
{
    int arr[] = {1,2,3,9,7,5,1,7,9,2,6,3};
    findTwoUniqueNumber(arr,12);
    return 0;
}
