// Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, but if the array is sorted in reverse order, the inversion count is the maximum. 

// Given an array a[]. The task is to find the inversion count of a[]. Wher two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

// Examples: 

// Input: arr[] = {8, 4, 2, 1}
// Output: 6
// Explanation: Given array has six inversions: (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).

// Input: arr[] = {1, 20, 6, 4, 5}
// Output: 5
// Explanation: Given array has five inversions: (20, 6), (20, 4), (20, 5), (6, 4), (6, 5). 


#include<bits/stdc++.h>

//Include the following header files in your code to use PBDS:
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;


//       type-int          Less<int>comparator 
typedef tree<int,null_type,less<int>,rb_tree_tag,
             tree_order_statistics_node_update> PBDS; // name - PBDS



int main(){

   int n=5;
   int arr[]={1, 20, 6, 4, 5};

   PBDS st;
   int inversion_Count=0;
   for(int i=0;i<n;i++){
      inversion_Count+=(st.size() - st.order_of_key(arr[i]));
      st.insert(arr[i]);
   }

   cout<<inversion_Count<<endl;

   return 0;
}