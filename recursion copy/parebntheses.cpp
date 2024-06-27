#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool parenthesis(string str, int i, stack<char> st){
    if (i>=str.size()&&st.empty())
    {
        return true;
    }
    if (str[i]=='('||str[i]=='{'||str[i]=='[')
    {
        st.push(str[i]);
        return parenthesis(str,i+1,st);
    }
    if ((str[i]==')'&&st.top()=='(')||(str[i]=='}'&&st.top()=='{')||(str[i]==']'&&st.top()=='['))
    {
        st.pop();
        return parenthesis(str,i+1,st);
    }
    return false;
}
int main(){
    stack<char> st;
    string str;
    getline(cin,str);
    if (parenthesis(str,0,st))
    {
        cout<<"Valid"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    return 0;   
}