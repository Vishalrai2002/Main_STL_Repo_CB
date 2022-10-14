#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// You have to sort a list of word by taking user input


// comparing on the basis of the lenght
bool compare(string s1,string s2){
    if(s1.length()==s2.length()){ // if equal then do sort accor.  to lexo
        return s1<s2; // overloaded operator used here
    }

    return s1.length()>s2.length(); // return first that has larger lenght
}

int main()
{
    int n;
    cin>>n;

    cin.get(); // to take my last input if i not write then this ignore last word
    string s[100];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    // sort(s,s+n); // Lexographically sorting 
    sort(s,s+n,compare);  // sorting using comparator

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    cout<<endl; 


    return 0;
}