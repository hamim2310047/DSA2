#include<iostream>
using namespace std;

void evenn(int arr[], int n, int i,int &count){
    if (i>n-1)
    {
        return;
    }
    if (arr[i]%2==0)
    {
        count++;
        cout<<arr[i]<<" ";
    }
    evenn(arr,n,i+1,count);
}
void odd(int arr[], int n, int i,int &count){
    if (i>n-1)
    {
        return;
    }
    if (arr[i]%2==1)
    {
        count++;
        cout<<arr[i]<<" ";
    }
    odd(arr,n,i+1,count);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count1=0;
    cout<<"Even: ";
    evenn(arr,n,0,count1);
    cout<<"   count: "<<count1;
    cout<<endl;
    int count2=0;
    cout<<"Odd: ";
    odd(arr,n,0,count2);
    cout<<"   count: "<<count2<<endl;
    return 0;
}