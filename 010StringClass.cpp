#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s0;
    // string s1("Hello");
    // string s2="Hi vishal";
    // string s3(s2);

    // string s4=s3;
    // char a[]={'a','b','c','\0'};

    // string s5(a);
    // cout<<s0<<endl;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    // cout<<s4<<endl;
    // cout<<s5<<endl;

    // // empty 
    // if(s0.empty()){
    //     cout<<"Empty string"<<endl;
    // }
    // // append
    // s0.append("I love c++");
    // cout<<s0<<endl;
    // s0+=" and DSA";
    // cout<<s0<<endl;
    
    // // compare two string
    // s0="Apple";
    // s1="Mango";
    // // return 0 if they equal otherwise return >0 or may <0 depend upon lexographically comparsion
    // cout<<s0.compare(s1)<<endl;

    // // Overloaded operator comparison using (> or <)
    // if(s1>s0){
    //     cout<<"Mango is > than apple in lexographically order "<<endl;
    // }

    // find Substrings
    string s="I want to have a apple juice";
    int idx=s.find("apple");
    cout<<idx<<endl;

    // Remove a word from the string
    string word="apple";
    int len=word.length();
    s.erase(idx,len+1);
    cout<<s<<endl;

    return 0;
}