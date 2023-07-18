#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    if(n==0 || n==1) cout<<-1<<" "<<-1<<endl;
    int small=INT_MAX, secondsmall=INT_MAX;
    int large=INT_MIN, secondlarge=INT_MIN;
    for(int i=0; i<n; i++){
        small=min(small, arr[i]);
        large=max(large, arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]<secondsmall && arr[i]!=small) secondsmall=arr[i];
        if(arr[i]>secondlarge &&  arr[i]!=large) secondlarge=arr[i];
    }
    cout<<"second small element: "<<secondsmall<<endl;
    cout<<"second largest element: "<<secondlarge<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    solve(arr, n);
}
/* COMPLEXITY ANALYSIS

Time Complexity: O(N), We do two linear traversals in our array

Space Complexity: O(1)
*/