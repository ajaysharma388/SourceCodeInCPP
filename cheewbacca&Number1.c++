#include <iostream>
using namespace std;

int main()
{
    char num[50];
    int i = 0;
    cin>>num;
    if(num[0] == '9')
        i++;
    for(; num[i]!='\0' ; ++i){
        int digit = num[i] - '0';
        if(digit >= 5){
            digit = 9 - digit;
            num[i] = '0' + digit;
        }
    }
    cout<<num<<endl;;
    return 0;
}
