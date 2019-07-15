#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

void bucket_Sort(int *a,int n){
    vector<int> buckets[n];
    for(int i=0;i<n;++i){
        float num=a[i]/10.0;
        buckets[(int)floor(num)].push_back(a[i]);
    }
    for(int i=0;i<n;++i){
        sort(buckets[i].begin(), buckets[i].end());
    }
    int index=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<buckets[i].size();++j){
            a[index++]=buckets[i][j];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    bucket_Sort(a,n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
