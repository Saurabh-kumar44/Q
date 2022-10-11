#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    for (int i = n-2; i>=0; i--){
        arr[i] = arr[i]*arr[i+1];
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }

    return 0;
}