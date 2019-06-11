#include <iostream>
#include <cstring>
using namespace std;
char* myStrTok(char str[],char delim){
    static char* input = NULL;
    if(str!=NULL)
        input = str;
    if(input == NULL)
        return NULL;
    char *output = new char[strlen(input)+1];
    int i;
    for(i = 0 ; input[i]!='\0' ; ++i){
        if(input[i]!=delim){
            output[i] = input[i];
        }else{
            output[i] = '\0';
            input = input+i+1;
            return output;
        }
    }
    output[i]='\0';
    input = NULL;
    return output;
}
int main()
{
    char str[] = "Hello world! with the coding blocks";
    char *ptr = myStrTok(str,' ');
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr = myStrTok(NULL,' ');
    }
    return 0;
}
