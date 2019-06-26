#include <iostream>
using namespace std;
#define ll long long int

bool isValidConfig(ll books[],int n,int k,int pages){
    int student = 1;
    int currPages = 0;
    for(int i=0;i<n;++i){
        if(currPages+books[i]>pages){
            currPages = books[i];
            student++;
            if(student > k)
                return false;
            }else
                currPages+=books[i];
    }
    return true;
}


ll binarySearch(ll books[],ll n,ll k){
    ll total_pages = 0;
    ll s=0,e=0;
    for(int i=0;i<n;++i){
        total_pages+=books[i];
        s = max(s,books[i]);
    }
    e=total_pages;
    ll finalAns = s;
    while(s<=e){
        ll mid = (s+e)/2;
        if(isValidConfig(books,n,k,mid)){
            //true search in left part;
            e = mid-1;
            finalAns = mid;
        }else
            // search in right part.
            s = mid+1;
    }
    return finalAns;
}

int main()
{
    ll books[100005];
    int testCases;
    cin>>testCases;
    while(testCases--){
        ll n,m;
        cin>>n>>m;
        for(int i=0;i<n;++i)
            cin>>books[i];
        cout<<binarySearch(books,n,m);
    }
    return 0;
}
