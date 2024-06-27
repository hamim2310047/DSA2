#include<iostream>
using namespace std;

int fibo(int n){
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        arr[i]=fibo(i);
        cout<<arr[i]<<endl;
    }
    return 0;
}