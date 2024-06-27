#include<iostream>
using namespace std;
int sumcount(int num){
    if (num==0)
    {
        return 0;
    }
    else
    {
        return (num%10)+ sumcount(num/10);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<sumcount(n)<<endl;
    return 0;
}