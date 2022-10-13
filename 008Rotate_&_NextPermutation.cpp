#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    // Rotate in Array 
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);

    rotate(arr,arr+n/2,arr+n);
    for(auto it:arr){
        cout<<it<<" "; // 30 40 50 10 20 
    }
    cout<<endl;

    // Rotate in Vector
    vector<int>v ={10,20,30,40,50};
    int sz=v.size();
    rotate(v.begin(),v.begin()+3,v.end());
    for(auto it:v){
        cout<<it<<" "; // 40 50 10 20 30
    }
    cout<<endl;

    // Next Permutations -> gives us the next large number or Permutations
    vector<int>a={1,2,3};
    next_permutation(a.begin(),a.end()); // 1 3 2
    next_permutation(a.begin(),a.end()); // 2 1 3
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}