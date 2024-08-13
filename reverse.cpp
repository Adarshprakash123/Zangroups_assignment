#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1, 2, 3, 4, 5};
    int n=arr.size();
    int i=0,j=n-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++,j--;
    }
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
}