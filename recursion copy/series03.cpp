#include<iostream>
using namespace std;

int series(int num,int A){
    if (num==0)
    {
        return 0;
    }
    else
    {
        return pow(2,num)*(2*num+1)*A + series(num-1,A+1);
    }
}
void printSeries(int n, int i,int m){
    if (i>n)
    {
        cout<<endl;
        return;
    }
    cout<<pow(2,i)<<"*"<<2*i+1<<"*"<<m;
    if (i<n)
    {
        cout<<"+";
    }
    printSeries(n,i+1,m-1);
}
int main(){
    int n;
    cin>>n;
    printSeries(n,1,n);
    cout<<"sum of the series: "<<series(n,1)<<endl;
    return 0;
}