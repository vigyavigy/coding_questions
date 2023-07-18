#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    set<int> st;   //by default, elements are stored in ascending sorted order in the set
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int k=st.size();
    int j=0;
    for(int x: st) arr[j++]=x;
    return k;
}
int main(){
    int n;
    cin>>n; int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k=solve(arr, n);
    cout<<"unique array is: "<<endl;
    for(int i=0; i<k; i++) cout<<arr[i]<<" ";
}
/*
COMPLEXITY ANALYSIS
Time complexity: O(n*log(n))+O(n)

Space Complexity: O(n) 
*/