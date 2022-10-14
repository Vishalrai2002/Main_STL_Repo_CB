#include<bits/stdc++.h>
using namespace std;

void solution(){
   int m=8,n=8;
   char grid[m][n];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>grid[i][j];
    }
   }
   int cnt=0;
   vector<char>v,v2;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(grid[i][j]=='.'){
            continue;
        }
        else{
        cnt++;
        // cout<<grid[i][j]<<"";
        if(grid[m-1][n-1]=='B')
        v.push_back(grid[m-1][n-1]);
        else v2.push_back(grid[n-1][m-1]);
        
        }
    }
    // cout<<endl;
   }
//    cout<<endl;
   set<char>st1;
   set<char>st2;

   for(auto it:v){
    //    cout<<it<<" ";
       st1.insert(it);
   }
//    cout<<endl;
   for(auto it:v2){
    //    cout<<it<<" ";
       st2.insert(it);
   }
//    cout<<endl;
bool flag1=true;
vector<char>vis;
bool flag2=true;
   for(auto it:st1) {
    // cout<<it<<" ";
    vis.push_back(it);
    // if(it=='B')  cout<<"B"<<endl;
    // else cout<<"R"<<endl;
   }
//    cout<<endl;
   for(auto it:st2){
    // cout<<it<<" ";
    vis.push_back(it);
    // if(it=='B') cout<<"B";
    // else cout<<"R";
   }
//    cout<<endl;


//    if(v[v.size()-1]=='B') cout<<"B"<<endl;
//    else cout<<"R"<<endl;
    
// flag1?cout<<"B":cout<<"R";
      
      
for(auto it:vis){
    // cout<<it<<" ";
    if(it=='.') cout<<"R";
    else cout<<"B";
}
cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    
    return 0;
}