#include<bits/stdc++.h>
using namespace std;


// Forward Iteratro search using list and template and generic class
template<typename forwardIterator,typename T>
forwardIterator search(forwardIterator start,forwardIterator end,T key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        else{
            start++;
        }
    }
    return end;
}

int main(){

    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(6);

    auto it=search(l.begin(),l.end(),6);

//    cout<<*it<<endl;
    if(it==l.end()){
        cout<<"Not Present"<<endl;
    }
    else{
        cout<<*it<<endl;
    }
    return 0;
}
