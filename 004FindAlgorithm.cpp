#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);
    // For search use -> find 
    int key=11;
    auto it = find(arr,arr+n,key); // here you it store the address of that key 
    // to get the actual address you have to subract you it address with the base addres which is arr
    // by doing this you are able to get the index
    int index=it-arr; 
    if(index==n){
        cout<<key<<" is not present "<<endl;
    }
    else {
        cout<<"index is present at "<<index<<endl;
    }

    return 0;
}