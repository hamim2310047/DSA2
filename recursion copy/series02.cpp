#include<iostream>
using namespace std;

int series(int num){
    if (num==0)
    {
        return 0;
    }
    else
    {
        return pow(num,2)+series(num-1);
    }
}
void printSeries(int n, int i){
    if (i>n)
    {
        cout<<endl;
        return;
    }
    cout<<i<<"^2";
    if (i<n)
    {
        cout<<" + ";
    }
    printSeries(n,i+1);
}
int main(){
    int n;
    cin>>n;
    printSeries(n,1);
    cout<<"sum of the series: "<<series(n)<<endl;
    return 0;
}