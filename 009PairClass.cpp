#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    pair<int,char>p;
    p.first=9;
    p.second='V';

    pair<int,char>p2(p);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,string>p3=make_pair(1000,"Fortuner");
    cout<<p3.first<<" "<<p3.second<<endl;

    // Take input
    int a,b;cin>>a>>b;
    pair<int,int>p4=make_pair(a,b);

    return 0;
}