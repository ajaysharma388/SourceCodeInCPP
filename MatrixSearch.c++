#include <iostream>
using namespace std;

bool matrixSearch(int arr[][10],int r,int c,int key){
    int i = 0 , j = c -1;
    while(i < r && j >= 0){
        if(arr[i][j] < key)
            i++;
        else if(arr[i][j] == key)
            return true;
        else if(arr[i][j] > key)
            j--;
    }
    return false;
}
int main()
{
    int arr[10][10];
    int row,col;
    cin>>row>>col;
    for(int i = 0 ; i < row ; ++i)
        for(int j = 0 ; j < col ; ++j)
            cin>>arr[i][j];
    int key;
    cin>>key;
    cout<<matrixSearch(arr,row,col,key);
    return 0;
}
