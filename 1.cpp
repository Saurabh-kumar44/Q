#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int k=0,i=0,j=1,sum=0,temp=0;
    vector<int> arr = {1,2,3,4};
    vector<int> arr1;
    while(i<=4 && j!=k){
        sum = sum + arr[j];
        i++;
        j++;
        if(j>4){
            arr1[temp]=sum;
            temp++;
            i=0,sum=0;
            k++;
        }
        else if(k!=j){
            j++;
            i--;
        }
    }
    for(i=0; i<4; i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}