#include<iostream>
using namespace std;

void even(int low,int high){
    if (low<=high)
    {
        if (low%2==0)
        {
            cout<<low<<" ";
        }
        even(low+1,high);
    }
}
int main(){
    int low,high;
    cin>>low>>high;
    even(low,high);
    return 0;
}