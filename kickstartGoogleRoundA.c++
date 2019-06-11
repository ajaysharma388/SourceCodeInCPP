#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++){
        if (arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int calculateHours(int n , int p , int a[]){
    quickSort(a,0,n);
    int sum = 0;
	for(int j = 0 ; j < p-1 ; j++)
        sum += (a[p-1] - a[j]) ;
	int m = sum;
	sum = 0;
	for(int i = 1 ; i <= n-p ; i++){
		for(int j = i ; j < i+p-1 ; j++)
			sum += (a[i+p-1] - a[j]);
		if(m>sum)
			m = sum;
		sum=0;
	}
	if(m<0)
        return 0;
	return m;
}

int main(){
    int testcases;
    cin>>testcases;
    for(int k = 1 ; k <= testcases ; k++){
        int n,p;
        cin>>n>>p;
        int a[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>a[i];
        cout<<"Case #"<<k<<": "<<calculateHours(n,p,a)<<endl;
    }
    return 0;
}
