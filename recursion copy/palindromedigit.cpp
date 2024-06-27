#include<iostream>
using namespace std;

int palindrome(int num,int i){
    string str = to_string(num);
    int n = str.size();
    if (i>=n/2)
    {
        return 1;
    }
    else
    {
        if (str[i]==str[n-i-1])
        {
            return palindrome(num,i+1);
        }
        else
        {
            return 0;
        }
        
    }   
}
int main(){
    int n;
    cin>>n;
    if (palindrome(n,0))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}