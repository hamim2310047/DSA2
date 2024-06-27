#include<iostream>
using namespace std;

int maxxxi(int arr[][10],int n, int i,int m, int j){
    if (i>=n)
    {
        return arr[i-1][m-1];
    }
    if(j>=m)
    {
        return maxxxi(arr,n,i+1,m,0);
    }
    return max(arr[i][j],maxxxi(arr,n,i,m,j+1));
}
int main(){
    int n,m;cin>>n>>m;
    int arr[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Maximum: "<<maxxxi(arr,n,0,m,0)<<endl;
    return 0;
}