#include<bits/stdc++.h>
using namespace std;
void interchange_sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                int temp =a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nPhần tử vừa nhập : ";
    for(auto x:a){
        cout<<x<<" ";
    }
    interchange_sort(a,n);
    cout<<endl;
    cout<<"\nPhần tử đã được sắp xếp : ";
     for(auto x:a){
        cout<<x<<" ";
    }
}