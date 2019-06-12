#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,targetSum = 0;
    vector<int> vec;
    cin>>n;
    vec.reserve(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>targetSum;
        vec.push_back(targetSum);
    }
    cin>>targetSum;
    sort(vec.begin(),vec.end());
    int i = 0 , j = n-1;
    while(i<j){
        if(vec[i] + vec[j] > targetSum){
            j--;
        }else if(vec[i] + vec[j] < targetSum){
            i++;
        }else{
            cout<<vec[i]<<" and "<<vec[j]<<endl;
            j--;
            i++;
        }
    }
    return 0;
}
