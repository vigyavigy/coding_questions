#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotatearraytoright(int arr[], int n, int k){
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);
}
void rotatetoleft(int arr[], int n, int k){
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int k; cin>>k;
    rotatearraytoright(arr, n, k);
    cout<<"array after right rotation is: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    rotatetoleft(arr, n, k);
    cout<<"array after left rotation is: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}