#include<iostream>
using namespace std;

int sum(int arr[],int n,int i){
    if (i>n-1)
    {
        return 0;
    }
    return arr[i]+sum(arr,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sum(arr,n,0)<<endl;
    return 0;
}