#include <iostream>
using namespace std;

void reverseRow(int *a,int col){
    int temp = 0;
    for(int i = 0 ; i < col/2 ;++i){
        temp = a[i];
        a[i] = a[col-1-i];
        a[col-1-i] = temp;
    }
    return;
}
void transpose(int a[][10],int row ,int col){
    int i = 0,j = 1,inc = 0,temp = 0;
    int n= col/2+1;
    while(inc<=n){
        if(j < col && i < row){
            //cout<<"["<<i<<"]["<<j<<"]"<<endl;
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            j++;
        }else if(i < row && j < col){
            //cout<<"["<<i<<"]["<<j<<"]"<<endl;
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            i++;
        }else{
            inc++;
            j = 1;
            i = 0;
            j+=inc;
            i+=inc;
        }
    }
    return;
}
void initArray(int a[][10] , int row , int col){
    int value = 10;
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            cin>>a[i][j];
        }
    }
    return;
}
void printMatrix(int a[][10],int row,int col){
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[10][10];
    int row,col;
    cin>>row>>col;
    initArray(arr,row,col);
    transpose(arr,row,col);
    for(int i = 0 ; i < row ; i++){
        reverseRow(arr[i],col);
    }
    printMatrix(arr,row,col);
    return 0;
}
