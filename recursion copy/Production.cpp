#include<iostream>
using namespace std;

int product(int arr[],int n, int i){
    if (i>=n)
    {
        return 1;
    }
    return arr[i]*product(arr,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<product(arr,n,0)<<endl;
    return 0;
}