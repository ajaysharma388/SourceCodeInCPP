#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    vector<int> vec1,vec2;
    vec1.reserve(n);
    vec2.reserve(n*2);
    for(int i = 0; i < n; ++i){
        cin>>temp;
        vec1.push_back(temp);
    }
    for(int i = 0; i < n; ++i){
        cin>>temp;
        vec2.push_back(temp);
    }
    for(int i = n ; i < 2*n ; ++i){
        vec2.push_back(vec1[i-n]);
    }
    sort(vec2.begin(),vec2.end());
    //for(int i = 0 ; i < 2*n ; ++i){
    //    cout<<vec2[i]<<" ";
    //}
    cout<<vec2[n]<<endl;
    return 0;
}
