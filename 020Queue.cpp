#include<iostream>
#include<queue>
using namespace std;
/*
----FIFO----
push 
pop
front
empty
*/
int main()
{
    queue<int>q;
    for(int i=1;i<=5;i++){
        int x;cin>>x;
        q.push(x);
    }
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
   
    

    return 0;
}