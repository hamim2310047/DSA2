#include<iostream>
using namespace std;
int primer(int a, int d){
    if (d*d>a)
    {
        return 1;
    }
    if (a%d==0)
    {
        return 0;
    }
    return primer(a,d+1);
}
int isPrime(int n){
    if (n==0||n==1)
    {
        return 0;
    }
    return primer(n,2);
}
void prime(int arr[],int n,int i,int &count){
    if (i>n-1)
    {
        return;
    }
    if (isPrime(arr[i]))
    {
        count++;
        cout<<arr[i]<<" ";
    }
    prime(arr,n,i+1,count);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    prime(arr,n,0,count);
    cout<<endl;
    cout<<"count: "<<count<<endl;
    return 0;
}