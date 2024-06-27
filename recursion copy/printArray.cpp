#include<iostream>
using namespace std;

void printArray(int arr[],int n,int i){
    if (i>n-1)
    {
        return;
    }
    if (i<=n-1)
    {
        cout<<arr[i]<<endl;
    }
    printArray(arr,n,i+1);
}
void revPrintArry(int arr[],int n,int i){
    if (n<i)
    {
        return;
    }
    cout<<arr[n]<<endl;
    revPrintArry(arr,n-1,i);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n,0);
    revPrintArry(arr,n-1,0);
    return 0;
}