#include<bits/stdc++.h>
using namespace std;
int secondsmall(int arr[], int n){
    if(n<2) return -1;
    int small,ssmall=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]<ssmall && arr[i]!=small) ssmall=arr[i];
    }
    return ssmall;
}
int secondlargest(int arr[], int n){
    int large, slarge=INT_MIN;
    if(n<2) return -1;
    for(int i=0; i<n; i++){
        if(arr[i]>large){
            slarge=large;
            large=arr[i];
        }
        else if(arr[i]<slarge && arr[i!=large]) slarge=arr[i];
    }
    return slarge;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ss=secondsmall(arr, n);
    int sl=secondlargest(arr, n);
    cout<<"second smallest elemnt: "<<ss<<endl;
    cout<<"second largest element: "<<sl<<endl;
}
/* CODE COMPLEXITY
Time Complexity: O(N), Single-pass solution

Space Complexity: O(1)
*/