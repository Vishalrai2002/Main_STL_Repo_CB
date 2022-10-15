#include <iostream>
#include <cstring>
#include <string>
#include<algorithm>
using namespace std;

/*
Problme Link - https://hack.codingblocks.com/app/practice/1/1042/problem
*/

string ExtractTokenByKey(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " ");

    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }

    return (string)s;
}


// function to convert a string to int
int convertToInt(string s){
    // return stoi(s);
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--){
        ans+=((s[i]-'0')*p);
        p=p*10;
    }
    return ans;
}

bool numericCompare(pair<string,string>s1,pair<string,string>s2){
    string key1=s1.second;
    string key2=s2.second;

    return convertToInt(key1)<convertToInt(key2);
}
bool lexicoCompare(pair<string,string>s1,pair<string,string>s2){
    string key1=s1.second;
    string key2=s2.second;

    return key1<key2; // operatro overloaded here so it directly sort according to lexico

}

int main()
{
    // To know what our above method do
    // string s("10 20 30 40 50");
    // int key=3;
    // cout<<ExtractTokenByKey(s,key)<<endl;

    int n;
    cin >> n;
    cin.get();
    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    int key;
    string reverseal, ordering;
    cin>>key>>reverseal>>ordering;


    pair<string,string> strPair[100];
    for(int i=0;i<n;i++){
        strPair[i].first=a[i];
        strPair[i].second=ExtractTokenByKey(a[i],key);
    }
    
    if(ordering=="numeric"){
        sort(strPair,strPair+n,numericCompare);
    }
    else{
        sort(strPair,strPair+n,lexicoCompare);
    }


    if(reverseal=="true"){
    for(int i=0;i<n/2;i++){
        swap(strPair[i],strPair[n-i-1]);
    }
    }

    // print the output
    for(int i=0;i<n;i++){
        cout<<strPair[i].first<<" "<<endl;
    }
    cout<<endl;
    return 0;
}