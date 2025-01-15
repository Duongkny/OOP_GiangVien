#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }if(min !=i){
                int tmp=a[min];
                a[min]=a[i];
                a[i]=tmp;
        }
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(auto x:a){
        cout<<x<<" ";
    }
    selection_sort(a,n);
    cout<<endl;
     for(auto x:a){
        cout<<x<<" ";
    }
}