#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> v;
        
        reverse(arr,arr+n);
        int max = -1;

        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                v.push_back(max);
            }
        }

        reverse(v.begin(),v.end());

        for(auto i : v){
            cout<<i<<" ";
        }
        
    }
    return 0;
}