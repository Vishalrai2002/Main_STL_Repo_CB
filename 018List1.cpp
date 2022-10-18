#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

/*

ALL ABOUT THE LIST

in list 
push_back
push_front
pop_back
pop_front
insert
earse(idx)
remove (x)
*/

int main()
{
    // Initialisation of a list
    list<int>l;
    list<int>l1{1,2,4,5,6};

    list<string>l2={"apple","guava","banana","grapes"};
    l2.push_back("pine-apple");

    // For Sorting the list
    l2.sort();

    // For Reversing the list
    l2.reverse();

    l2.pop_front(); // Remove the first element of the list

    // cout<<l2.front()<<endl; // Print the first element of the list

    l2.push_front("kiwi"); // push at front
    l2.pop_back(); // remove the last 


    // for(auto it=l2.begin();it!=l2.end();it++){
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;
    l2.push_back("orange");
    l2.push_back("lemon");

    // If you have to remove a particular value in the list
    l2.remove("kiwi");
    string toremove="orange";
    l2.remove(toremove); // remove all the occurend of the input you wnt to rmove

    

    // iterate over the list using for each loop
    for(auto it:l2){
        cout<<it<<" ";
    }
    cout<<endl;

    // If you insert a element at a particular index
    auto it=l2.begin();
    it++;
    it++;
    l2.insert(it,"fruiteJuice");
    for(auto it:l2){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}