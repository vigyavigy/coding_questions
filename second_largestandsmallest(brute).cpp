#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    if(n==0 || n==1) cout<<-1<<" "<<-1<<endl;
    sort(arr, arr+n);
    int secondsmall=arr[1];
    int secondlargest=arr[n-2];
    cout<<"second smallest element: "<<secondsmall<<endl;
    cout<<"second largest element: "<<secondlargest<<endl;
}
int main(){
    int n;
    cin>>n; int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    solve(arr, n);
}
/*
Time Complexity: O(NlogN), For sorting the array

Space Complexity: O(1)
*/