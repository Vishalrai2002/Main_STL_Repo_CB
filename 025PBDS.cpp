/*Policy based data structures in C++ are somewhat similar to sets. They provide a few extra, but considerably powerful operations which grant a programmer the virtues of high-performance, semantic safety and flexibility as compared to the standard data structures of C++ standard library.

PBDS works like a set .... its function ->

1) Find-by-order(k)-->return the iterator to the kth largest element (start from 0) . Time C-> O(Log(n))

2) Order-of-key(value)--> return the number of element in the set which are strictly less than then our value . Time C-> O(Log(n))


*/

#include<bits/stdc++.h>

//Include the following header files in your code to use PBDS:
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;


//       type-int          Less<int>comparator 
// typedef tree<int,null_type,less<int>,rb_tree_tag,
//              tree_order_statistics_node_update> PBDS; // name - PBDS


// If you store a pair of int,int
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,
            tree_order_statistics_node_update> PBDS; 

int main(){

   PBDS st; // declared pbds named as st it behave like a set data structure 
   // st.insert(1);
   // st.insert(3);
   // // st.insert(3);
   // st.insert(4);
   // st.insert(10);
   // st.insert(15);

   // For print the whole st
   // for(auto it:st){
   //    cout<<it<<" ";
   // }
   // cout<<endl;



   // To iterate over the st
   // Kth largest element till now Time Complexity-> Log(N)
   // for(int i=0;i<st.size();i++){
   //    cout<<i<<"  "<<*st.find_by_order(i)<<endl;
   // }
   // cout<<endl;

   // // return the number of element in set which are less than than our k

   // int k=4;
   // cout<<st.order_of_key(k)<<endl;


// Inserted pair in st
   // ({value,index})
   st.insert({15,0});
   st.insert({3,1});
   st.insert({10,2});
   st.insert({4,3});
   st.insert({1,4});
   st.insert({1,5});

   // for(auto it:st){
   //    cout<<it.first<<" "<<it.second<<endl;
   // }
   // cout<<endl;

   for(int i=0;i<st.size();i++){
      cout<<i<<"-> "<<st.find_by_order(i)->first<<" "<<st.find_by_order(i)->second<<endl;
   }
   cout<<endl;

   return 0;
}