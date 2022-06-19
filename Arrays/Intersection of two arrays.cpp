#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}

        int arr2[m];
        for(int i=0;i<m;i++){cin>>arr2[i];}

        // int a[n+m],c=0;
        // for(int i=0;i<n;i++){
        //     a[i]=arr[i];c++;
        // }
        // for(int i=0;i<m;i++){
        //     a[c++]=arr2[i];
        // }
        // unordered_map<int,int> mp;
        // for(int i=0;i<n+m;i++){
        //     mp[a[i]]++;
        // }
        // int cnt=0;
        // for(auto i : mp){
        //     if(i.second>1){
        //         cnt++;
        //     }
        // }

        // cout<<cnt;

        // vector<int> v1(n), v2(m);
        // vector<int>::iterator it ,st;

        // st = set_intersection(arr,arr+n,arr2,arr+m,v1.begin());
        // int ptr = (st-v1.begin());
        // cout<<ptr;

        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int c=0;
        for(int i=0;i<m;i++){
            if(s.find(arr2[i])!=s.end()){
                c++;
                s.erase(arr2[i]);
            }
        }
        cout<<c;
    }
    return 0;
}