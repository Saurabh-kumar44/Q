#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a%b==0){
        return b;
    }
    else{
        return GCD(a,a%b);
    }
}

int main()
{
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    cout<<"The GCD is: "<<GCD(a,b);

    return 0;
}