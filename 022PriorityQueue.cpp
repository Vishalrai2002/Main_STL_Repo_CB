#include<iostream>
#include<queue>
using namespace std;

// Heap implemented using the complete binary tree so that's why it take log (N) for push and pop

int main()
{
    int arr[5]={10,1,3,5,9};
    // By Deafault this is based on maxHeap
    // if you use this as a minheap than pass compartor

    // priority_queue<int>pq;  // for max heap

    
    priority_queue<int,vector<int>,greater<int>>pq; // for min heap
    for(int i=0;i<5;i++){
        pq.push(arr[i]); // log(N);
    }

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";  // O(1);
        pq.pop(); // log(N);
    }
    cout<<endl;
    

    return 0;
}