#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// function to compare function 
bool compare(int a,int b){
    return a<=b;
}

int main()
{
    // Indian Money Change Problem
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int);

                    // Course Approach
    int money=168;
    while(money){ // while your money is exists 
    int lb=lower_bound(coins,coins+n,money,compare)-coins-1; // compare compartor to compar money
    // cout<<lb<<" value "<<coins[lb]<<endl;
    int m=coins[lb];
    cout<<m<<" ";
    money=money-m;
    }
            // My approach 

    // int money=1200;
    // vector<int>v;
    // while(money){
    // auto it = upper_bound(coins,coins+n,money);
    // int sub=it-coins;
    //      int up=coins[sub-1];
    //      v.push_back(up);
    //     //  cout<<up<<endl;
    //     int leftM=money-up;
    //     money=leftM;
    // }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    


    
    return 0;
}