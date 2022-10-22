#include<iostream>
#include<map>
#include<string>
using namespace std;

/*
insert,find,erase all are in Time Complexity -> Log(N) because 
of underlined self balancing BST
*/

int main()
{
    // we can stroe here multiple values 
    multimap<char,string>mp;
    int n;cin>>n;
    // Take input
    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch>>s;
        mp.insert({ch,s});
    }

    auto it=mp.begin();
    mp.erase(it); // apple is erased here in this

    auto it2=mp.lower_bound('b'); // batman

    auto it3=mp.upper_bound('d'); // elephant

    // Print b/w ranges from batman -> elephant
    // Print till before Elephant

    for(auto it4=it2;it4!=it3;it4++){
        cout<<it4->second<<" "; 
    }
    cout<<endl;

    // Search for Cat
    auto f=mp.find('c');
    if(f->second=="cat"){
        mp.erase(f); // to remove key from the multimap
    }

    // if(f!=mp.end()){
    //     cout<<"Present "<<endl;
    // }
    // else {
    //     cout<<"NOt present "<<endl;
    // }

    // Print 
    for(auto it:mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    cout<<endl;


    return 0;
}