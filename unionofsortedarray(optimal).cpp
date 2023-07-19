#include<bits/stdc++.h>
using namespace std;
vector<int> Unionarray(int arr[], int arr1[], int n, int m){
    vector<int> Union;
    int i=0, j=0;
   while(i<n && j<m){
    if(arr[i]<=arr1[j]){
        if(Union.size()==0 || Union.back()!=arr[i]) Union.push_back(arr[i]);
        i++;
    }
    else{
        if(Union.size()==0 || Union.back()!=arr1[j]) Union.push_back(arr1[j]);
        j++;
    }
   }
   while(i<n){
    if(Union.back()!=arr[i]) Union.push_back(arr[i]);
    i++;
   }
   while(j<m){
    if(Union.back()!=arr1[j]) Union.push_back(arr1[j]);
    j++;
   }
   return Union;
}
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n], arr1[m];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<m; i++) cin>>arr1[i];
    vector<int> Union=Unionarray(arr, arr1, n, m);
    cout<<"union array is: "<<endl;
    for(auto& it: Union) cout<<it<<" ";
}
/*

Time Complexity: O(m+n), Because at max i runs for n times and j runs for m times. When there are no common elements in arr1 and arr2 and all elements in arr1, arr2 are distinct. 

Space Complexity : O(m+n) {If Space of Union ArrayList is considered} 

O(1) {If Space of union ArrayList is not considered}
*/