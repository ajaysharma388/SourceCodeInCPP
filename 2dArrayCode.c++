#include <iostream>
using namespace std;

void initArray(int a[][10],int row,int col){
    int value = 1;
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            a[i][j] = value;
            value++;
        }
    }
}
void wavePrint(int a[][10],int row,int col){
    for(int j = 0;j < col;++j){
        int i = (j&1)?row-1:0;
        while(i>=0 && i <row){
            cout<<a[i][j]<<" ";
            if(j&1)
                i--;
            else
                i++;
        }
    }
}
void spiralPrint(int a[][10],int row,int col){
    int startrow = 0,endrow = row-1,startcol = 0,endcol = col-1;
     while(startcol<=endcol && startrow<=endrow){
        //print the starting row;
        for(int j = startcol;j<=endcol;j++){
            cout<<a[startrow][j]<<" ";
        }
        startrow++;
        if(startcol<endcol){
        //print the ending column.
            for(int i = startrow;i<=endrow;++i){
                cout<<a[i][endcol]<<" ";
            }
            endcol--;
        }
        //print the ending row.
        if(startrow<endrow){
            for(int j = endcol;j>=startcol;j--){
                cout<<a[endrow][j]<<" ";
            }
            endrow--;
        }
        //printting the starting column.
        for(int i = endrow;i>=startrow;--i){
            cout<<a[i][startcol]<<" ";
        }
        startcol++;
    }
}
void staircaseSearch(int a[][10],int row,int col,int key){
    int i = 0,j = col-1;
    while(i<row && j>=0){
        if(a[i][j] == key){
            cout<<"Found at ["<<i<<"]["<<j<<"]"<<endl;
            return;
        }else if(a[i][j]<key){
            i++;
        }else{
            j--;
        }
    }
    cout<<"Element Not found"<<endl;
    return;
}
int main()
{
    int arr[10][10];
    int row,col;
    cin>>row>>col;
    initArray(arr,row,col);
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    wavePrint(arr,row,col);
    //cout<<"Enter Element to search : ";
    //int key;
    //cin>>key;
    //staircaseSearch(arr,row,col,key);
    return 0;
}
