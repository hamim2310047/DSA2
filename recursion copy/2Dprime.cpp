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
void prime(int arr[][10],int n,int i,int m,int j,int &count){
    if (i>=n)
    {
        return;
    }
    if (j>=m)
    {
        return prime(arr,n,i+1,m,0,count);
        return;
    }
    if (isPrime(arr[i][j]))
    {
        count++;
        cout<<arr[i][j]<<" ";
    }
    prime(arr,n,i,m,j+1,count);
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int count=0;
    prime(arr,n,0,m,0,count);
    cout<<" -> count: "<<count<<endl;
    return 0;
}