#include<iostream>
using namespace std;

int factt(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factt(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<factt(n)<<endl;
    return 0;
}