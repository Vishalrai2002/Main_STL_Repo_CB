#include<bits/stdc++.h>
using namespace std;

// same problem as previous but solve the by using own class 

// you have to sort the car according to the distance from 0,0 to x,y if distance same the sort 
// according to the car name

class car{
    public:
    string car_name;
    int x,y;
    // custom comparator
    car(){

    }
    // parametised comparator
    car(string car_name,int x,int y){
        this->car_name=car_name;
        this->x=x;
        this->y=y;
    }
    // helper function to find the distanc
    int dist(){
        // return square of distance from the origin
        return x*x+y*y;
    }
};

bool comparator(car a, car b){
   int da=a.dist();
   int db=b.dist();
   if(da==db){
    return a.car_name.length()<b.car_name.length();

   }
   return da<db;
}

int main()
{
    // Car sorting Problem  
    int n;cin>>n;
    vector<car>v;
    for(int i=0;i<n;i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),comparator); // sort according to our comparator
    
    // Print 
    for(auto c:v){
        cout<<"Car: "<<c.car_name<<"->  "<<"distance is: "<<c.dist()<<" -> "<<c.x<<", "<<c.y<<endl;
    }
    cout<<endl;
    return 0;
}