#include<iostream>
#include<stack>
using namespace std;
/*
push
pop
top
empty
*/
int main()
{
    stack<int>s;
    int n=5;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.push(x);
    }

    // For Print
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

    return 0;
}