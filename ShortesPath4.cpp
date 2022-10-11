#include<iostream>
#include<vector>
using namespace std;

//Shortest path from 0,0 you can move either right or down or up and left or down or up

int main()
{
    cout<<"Enter the size of binary:"<<endl;
    cin >>size;
        cout<<"Enter the cordinates"<<endl;
        int p,q,i=0,j=0;
        cin>>p>>q;
        int count=0;
        while(i<size && j<size){
             if(i==p && j==q){
                break;
            }
            else if(j!=q){
                j++;
              count++;
            }
             else if(j==q){
                i++;
                count++;
            }   
        }
        cout<<count<<endl;

    return 0;
}