#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s = "hi, how are u?";
    vector<string> v;
    vector<string> v1;
    for(int i=0; i<s.length(); i++){
        string w ="";
        while(s[i]!=' ' && i<s.length()){
            w += s[i];
            i++;
        }
        v1.push_back(w);
        v1.push_back(" ");
    }
    string res;
    // vector<string> ::iterator it;
     for(int j = v1.size()-1; j>=0; j--){
        cout<<v1[j];
    }

    return 0;
}