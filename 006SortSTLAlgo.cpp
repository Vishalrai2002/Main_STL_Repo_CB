#include<iostream>
#include<algorithm>
using namespace std;


// Comparator function 
bool compare(int a,int b){
    return a<b; // sort in accending order 
    // return a>b; sort in desencing order 
}

int main()
{
    int arr[]={1,3,6,3,4,2};
    int n=sizeof(arr)/sizeof(int);
    // sort(arr,arr+n);'
    sort(arr,arr+n,compare); // call compare function here to compare 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}