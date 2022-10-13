#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={20,30,40,40,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    // Searching in Sorted array -> Binary Search 
    int key=20;

    bool flag=binary_search(arr,arr+n,key);
    flag?cout<<"Present "<<endl:cout<<"Absent! "<<endl;
    
    // Two more things
    // Get the index of the element
    // lower_bound(s,e,key) and upper_bound(s,e,key) Time Complexity -> log(N)


// lower bound -> will return the address of the first bucket that is >=key
    auto it=lower_bound(arr,arr+n,40);
    int lb=it-arr; //subtact the it addrs with base addrs to get the desired index

    cout<<"lower bound is "<<lb<<endl;

// upper bound -> will return the addrss of the last bucket that is > key it means address of the key+1 th 
    auto et=upper_bound(arr,arr+n,40);
    int up=et-arr;
   
    cout<<"upper bound is "<<up<<endl;

// If you want to find out the occurecne of that elment than yu subract the ( upper_bound - lower_bound )

cout<<"Occurence of that element is "<<up-lb<<endl;

    return 0;
}