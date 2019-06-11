#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Hi, this is Ajay Sharma. I like to code on c++ and after coding I really like to upload that file on the github.";
    char *ptr;
    ptr = strtok(str," ,.");
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr = strtok(NULL," ,.");
    }
    return 0;
}
