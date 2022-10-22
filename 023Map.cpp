#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    map<string,int>mp;

    // Insert in Map
    mp.insert(make_pair("Mango",100));

    pair<string,int>p;
    p.first="Apple";
    p.second=120;
    mp.insert(p);

    mp["banana"]=20;

    // Search in Map using find function it return the iterators point to that key you are searching
    string fruitToSearch="Apple";

    // Let try to update the price of Apple

    mp[fruitToSearch]+=50;

    auto it=mp.find(fruitToSearch);
    if(it!=mp.end()){
        cout<<"Present and Price of "<<fruitToSearch<<" is ->"<<mp[fruitToSearch]<<endl;
    }
    else {
        cout<<"Fruit is not present"<<endl;
    }


    // Erase in Map -> this will the particular key value pair 
    mp.erase(fruitToSearch);

    // Another way to find the particular key in the map
    // it stores unique keys only once

    // Search in Map using the count function it will return (0 and 1)
    // 0 means key is not present and vise versa

    if(mp.count(fruitToSearch)){
      cout<<"Present and Price of "<<fruitToSearch<<" is ->"<<mp[fruitToSearch]<<endl;
    }
    else{
        cout<<"Fruit is not present"<<endl;
    }

    mp["Litchi"]=60;
    mp["Grapes"]=100;

    for(auto it=mp.begin();it!=mp.end();it++){
        // cout<<it->first<<" "<<it->second<<endl;
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    for(auto it:mp){
        cout<<it.first<<"  "<<it.second<<endl;
    }
    cout<<endl;

    return 0;
}