#include<bits/stdc++.h>
using namespace std;
vector<int> Union(int arr1[], int arr2[], int n, int m){
    map<int, int> freq;
    vector<int> Union;
    for(int i=0; i<n; i++) freq[arr1[i]]++;
    for(int i=0; i<m; i++) freq[arr2[i]]++;
    for(auto& it: freq) Union.push_back(it.first);
    return Union;
}
int main(){
    int n, m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0; i<n; i++) cin>>arr1[i];
    for(int i=0; i<m; i++) cin>>arr2[i];
    vector<int>Unionarray=Union(arr1, arr2, n, m);
    cout<<"union of two sorted array is: "<<endl;
    for(auto& it: Unionarray) cout<<it<<" ";
}
/* CODE COMPLEXITY

Time Compleixty: O((m+n)log(m+n)). Inserting a key in map takes logN times, where N is no of elements in map. At max map can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time. Upon approximation across insertion of all elements in worst it would take O((m+n)log(m+n) time.

Using HashMap also takes the same time, On average insertion in unordered_map takes O(1) time but sorting the union vector takes O((m+n)log(m+n))  time. Because at max union vector can have m+n elements.

Space Complexity: O(m+n) {If Space of Union ArrayList is considered} 

O(1) {If Space of union ArrayList is not considered}

*/