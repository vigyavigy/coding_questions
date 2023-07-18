//using two pointer
#include<bits/stdc++.h>
using namespace std;
int removeduplicate(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int k=removeduplicate(arr, n);
    cout<<"unique array is: "<<endl;
    for(int i=0; i<k; i++) cout<<arr[i]<<" ";
}
/*
CODE COMPLEXITY

Time Complexity: O(N)

Space Complexity: O(1)
*/