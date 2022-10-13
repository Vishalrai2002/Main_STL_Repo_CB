#include<bits/stdc++.h>
using namespace std;

// find function for books using comparator using classes and objects

class book{
public:
    string name;
    int price;

    book(string name,int price){
        this->name=name;
        this->price=price;
    }
    book(){

    }
};

class bookcompare{
    public:
        bool operator()(book a,book b){
            if(a.name==b.name){
                return true;
            }
            return false;
        }
};

int main(){
    book b1("c++",100); // Old edition of c++ book
    book b2("java",200);
    book b3("python",300);

    list<book>l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    book booktofind("c++",110); // find the new edition of c++ book

    bookcompare cmp;
    if(cmp(b1,booktofind)){
        cout<<"Book found true!";
    }


    return 0;
}
