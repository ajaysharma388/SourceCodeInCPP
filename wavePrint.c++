#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i = 0 ; i < row ; i++)
        for(int j = 0 ; j < col ; ++j)
            cin>>arr[i][j];
    for(int j = 0 ; j < col ; ++j){
        int i = (j&1)?row-1:0;
        while(i>=0 && i <row){
            cout<<" "<<arr[i][j]<<",";
            if(j&1)
                i--;
            else
                i++;
        }
    }
    cout<<" End"<<endl;
    return 0;
}
