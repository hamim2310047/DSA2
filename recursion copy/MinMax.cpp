#include<iostream>
using namespace std;

int mini(int arr[],int n, int i){
    if (i>=n-1)
    {
        return arr[i];
    }
    else
    {
        return min(arr[i],mini(arr,n,i+1));
    }
}
int maxxxi(int arr[],int n, int i){
    if (i>=n-1)
    {
        return arr[i];
    }
    else
    {
        return max(arr[i],maxxxi(arr,n,i+1));
    }
}
int main(){
    int n;cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum: "<<mini(arr,n,0)<<endl;
    cout<<"Maximum: "<<maxxxi(arr,n,0)<<endl;
    return 0;
}