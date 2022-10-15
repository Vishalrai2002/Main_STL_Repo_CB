#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*

char *strtok(char*s,char *delimiters)
return a token on each subsequent call
on the first call function shoud be passed with stirng argument for 's'
on subsequent calls we should pass the string argument as null

*/

int main()
{
    char s[100]="Today is a rainy day";

    char *ptr=strtok(s," "); // if break the string when it hit on the space and then return the word before the space or delimiter
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }



    return 0;
}