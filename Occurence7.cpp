#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
//     vector<int> v = {1,3,3,4,2,2,2,5,1,4};
//     // int v[] = {1,3,3,4,2,2,2,5,1,4};
//     // vector<int> v1;
//     int &max = *max_element(v.begin(), v.end());
// cout<<max;
//    int v1[]={0};
//     // for(int i=0; i<=v.size(); i++){
//     // int count=1;
//     //     for(int j=i+1; j<v.size(); j++){
//     //         if(v[i]==v[j]){
//     //             count++;
//     //         }
//     //     }  
//     // }
  
          //OR
//     int arr[] = {1,3,3,4,2,2,2,5,1,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mn = 0;
//     for(int i=0; i<n; i++){
//         mn = max(mn, arr[i]);
//     }
//     int freq[mn+1]={0};
//     for(int i=0; i<n; i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0; i<mn+1; i++){
//         if(freq[i]!=0){
//             cout<<i<<" -> "<<freq[i]<<endl;
//     }
//   }

          //OR
        vector<int> v = {1,3,3,4,2,2,2,5,1,4};
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            int count=1;
            for(int j=i+1; j<v.size(); j++){
                if(v[i]==v[j]){
                    count++;
                }
            }
            cout<<v[i]<<"->"<<count<<endl;
            i+=(count-1);
        }
    return 0;
}