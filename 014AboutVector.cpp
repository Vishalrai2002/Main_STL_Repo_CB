#include<bits/stdc++.h>
using namespace std;
int main()
{
    // how to initalise a vector
    vector<int>a;
    vector<int>b(5,10);
    vector<int>c(b.begin(),b.end());
    vector<int>d{1,3,5,5,5};

    // how to iterater over the vector
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
////////////////
    for(auto it=b.begin();it!=b.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
////////////////
    for(auto it:d){
        cout<<it<<" ";
    }
    cout<<endl;

    // user input in vector

    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int no;cin>>no;
        v.push_back(no); // it add the number at the end of the vector
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
//////////////////
    int m;cin>>m;
    vector<int>an(m);
    for(int i=0;i<m;i++){
        cin>>an[i];
    }
    for(auto it:an){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}