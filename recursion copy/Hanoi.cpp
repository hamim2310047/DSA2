#include<iostream>
using namespace std;

void hanoi(int n, int s, int a, int d){
    if (n==0)
    {
        cout<<s<<"->"<<d<<endl;
    }
    else
    {
        hanoi(n-1,s,d,a);
        cout<<s<<"->"<<d<<endl;
        hanoi(n-1,a,s,d);
    }
}
int main(){
    int n, s=1, a=2, d=3;
    cin>>n;
    hanoi(n,s,a,d);
    return 0;
}