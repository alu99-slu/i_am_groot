#include <bits/stdc++.h>
using namespace std;
// const int N = 1e6+10;
// int hsh[N];

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        unordered_map <int,int> mp;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            if(mp.find(arr[i]) == mp.end()){
                mp[arr[i]]=1;
            }else{
                mp[arr[i]]++;
            }
        }

        for(int i=0;i<n;i++){
            if(mp[arr[i]]>1){
                cout<<i+1;
            }
        }
        
        

        // cout<<n;

    }
    return 0;
}