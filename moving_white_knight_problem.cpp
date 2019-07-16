// Problem Statement
/*
You are given a chessboard of size NxN. There is a white knight and several black pawns located on the board.
The knight can move similarly to the normal knight in the game of chess; 
however it can only move towards the right of the board (see the below figure).
The mission of the knight is to capture as many black pawns as possible. 
Its journey ends when it moves to the rightmost column of the board.
Compute the maximum number of black pawns the white knight can capture.

Input
The first line contains t, the number of test cases (about 10). Then t test cases follow.
Each test case has the following form:
The first line contains N, the size of the chessboard (4 ≤ N ≤ 1000).
Then N lines follow, each line containing N characters which may be '.', 'K' or 'P', 
corresponding to the empty cell, the white knight, and the black pawn, respectively. 
There is exactly one 'K' character in the whole of the board.


*/
// Code.

#include <iostream>
using namespace std;

static int colSet[]={1,2,2,1},rowSet[]={-2,-1,1,2};
bool isValid(int n,int row,int col){
    return row>=0 && row<n && col>=0 && col<n;
}

int moving_knight(int a[][10],int n,int row,int col){
    int m=0;
    for(int i=0;i<4;++i){
        int r=row+rowSet[i];
        int c=col+colSet[i];
        if(isValid(n,r,c)){
            m=max(m,a[r][c]+moving_knight(a,n,r,c)); // write logic here.
        }
    }
    return m;
}

int main(){
    int testCases;
    int a[10][10];
    cin>>testCases;
    while(testCases--){
        int n,r,c;
        cin>>n;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                char ch;
                cin>>ch;
                if(ch=='K'){
                    a[i][j]=0;
                    r=i;c=j;
                }else if(ch=='P'){
                    a[i][j]=1;
                }else{
                    a[i][j]=0;
                }
            }
        }
        int res=moving_knight(a,n,r,c);
        cout<<res<<endl;
    }
    return 0;
}
