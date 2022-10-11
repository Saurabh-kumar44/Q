#include<iostream>
#include<stack>
using namespace std;

string ReverseSen(string &str){
stack<string> st;
string res;
    for(int i = 0; i < str.length(); i++){
        string word="";
        while(str[i]!=' ' && i<str.length()){
            word += str[i];
            i++;
        }
        st.push(word);
        st.push(" ");
    }
    cout<<endl;
    cout<<"The reverse Sentence is: "<<endl;
    while(!st.empty()){
        // cout<<st.top();
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    string s = "hii, darling vimal khaoge?";
    cout<<"original String: "<<endl;
    cout<<s;
    cout<<ReverseSen(s);

    return 0;
}