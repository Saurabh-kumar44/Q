#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	cout<<"Original string:"<<endl;
	string str = "  Hello I am saurav    ";
	cout<<str<<endl;
	string ans="";
	stack<string> st;
    for(int i = 0; i<str.length(); i++){
        string word="";
		while(str[i]==' ' && i<str.length()){
			i++;
		}
        while(str[i]!=' ' && i<str.length()){
            word += str[i];
            i++;
		}
            st.push(word);
    }
    cout<<"The reverse Sentence is: "<<endl;
    while(!st.empty()){
        ans += st.top();
		cout<<st.top()<<endl;
        st.pop();
		if(!st.empty()){
			ans+=" ";
		}
    }
	if(ans[0]==' ')ans.erase(0,1);
	
	cout<<ans;
}