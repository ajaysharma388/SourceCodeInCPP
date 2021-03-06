#include <iostream>
using namespace std;

int partition(int a[],int s,int e){
    int i=s-1,j=s,pivot=a[e];
    for(;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quick_Sort(int a[],int s,int e){
    if(s>=e) return;
    int pivot=partition(a,s,e);
    quick_Sort(a,s,pivot-1);
    quick_Sort(a,pivot+1,e);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    quick_Sort(a,0,n-1);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
