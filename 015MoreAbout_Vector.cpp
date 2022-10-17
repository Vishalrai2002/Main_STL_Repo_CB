#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>d={1,2,3,10,14};
    // push_back(value) O(1)
    d.push_back(16);
    // pop_back() O(1)
    d.pop_back();

    // insert at middle O(N)
    int middle=d.size()/2;
    d.insert(d.begin()+middle,100); // you want to add a single value in the middle
    d.insert(d.begin()+3,4,100); // you want to add 4 element all of them are value 100

    // if You want to earse a particulat element like-> erase element at the middle
    d.erase(d.begin()+middle); // it removes 100

    // If you want to erase a ranges of a element between two ranges
    d.erase(d.begin()+middle,d.begin()+5);

    // cout<<*(d.begin()+middle)<<endl; give value at the middle

    d.clear(); // it removes all the element in the vector
    for(auto it:d){
        cout<<it<<" ";
    }
    cout<<endl;

    d.push_back(12);
    d.push_back(13);
    d.push_back(10);
    // access the front element
    cout<<d.front()<<endl;  // 12

    // acces the last element
    cout<<d.back()<<endl;  // 10

    return 0;
}