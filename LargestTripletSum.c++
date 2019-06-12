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
    int j,k;
    for(int i = 0 ; i <= n/2 ; ++i){
        k = i+1;
        j = n-1;
        while(k<j){
            if(vec[i]+vec[k]+vec[j] > targetSum)
                j--;
            else if(vec[i]+vec[k]+vec[j] < targetSum)
                k++;
            else{
                cout<<vec[i]<<", "<<vec[k]<<" and "<<vec[j]<<endl;
                k++;
                j--;
            }
        }
    }
    return 0;
}
