#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {3,4,2,1,3,3,3,2,2,1,5,3};
    int n= vec.size()/2;
    unordered_map<int,int> count;
    for(int i=0;i<vec.size();i++){
        count[vec[i]]++;
    }
    for(auto ans:count){
        cout<<ans.first<<"-"<<ans.second<<endl;
    }
    int max = INT_MIN;
    int res;
    for(auto ans:count){
        if(max<ans.second){
            max = ans.second;
            res = ans.first;
        }
    }
    cout<<"Max element is: "<<res<<endl;
  
    return 0;
}