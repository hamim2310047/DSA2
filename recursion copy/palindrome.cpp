#include<iostream>
using namespace std;

bool ispalindrome(string str, int i){
    int n= str.size();
    if (i>n/2)
    {
        return true;
    }
    else
    {
        return str[i]==str[n-i-1]&&ispalindrome(str,i+1);
    }
}
int main(){
    string str;
    cin>>str;
    if (ispalindrome(str,0))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}