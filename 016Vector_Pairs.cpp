#include<bits/stdc++.h>
using namespace std;

// you have to sort the car according to the distance from 0,0 to x,y

bool comparator(pair<int,int> a,pair<int,int> b){
     int d1=a.first*a.first+a.second*a.second; // X^2+y^2
     int d2=b.first*b.first+b.second*b.second;

    // if two cars have same distance then sort according to x-coordinate
     if(d1==d2){
        return a.first < b.first;
     }
     return d1<d2;
}

int main()
{
    // Car sorting Problem  
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),comparator); // sort according to our comparator
    // Print 
    for(auto it:v){
        cout<<"Car: "<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    return 0;
}