#include<iostream>
using namespace std;
int digitcount(int num,int &count){
    if (num==0)
    {
        return 0;
    }
    else
    {
        count++;
        return digitcount(num/10,count);
    }
    
}
int main(){
    int n;
    cin>>n;
    int count=0;
    digitcount(n,count);
    cout<<"Digit: "<<count<<endl;
    return 0;
}