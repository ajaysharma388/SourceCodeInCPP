#include <iostream>
#include <string>
using namespace std;

void filterCharacters(string s,int i){
    int k = 0;
    while(i){
        if(i&1){
            cout<<s.at(k);
        }
        k++;
        i = i>>1;
    }
    cout<<endl;
}
int main()
{
    string str;
    cin>>str;
    int range = 1<<str.length();
    for(int i = 1 ; i < range ; ++i){
        filterCharacters(str,i);
    }
    return 0;
}
