#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+10;
int hsh[N];
int hsh2[N];

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n],arr2[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        for(int i=0;i<n;i++){cin>>arr2[i];}

        // for(int i=0;i<n;i++){
        //     hsh[arr[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     hsh2[arr2[i]]++;
        // }
        int a[n+n-1],c=0;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            a[i]=arr[i];c++;
        }
        for(int i=0;i<n;i++){
            a[c++]=arr2[i];
        }

        for(int i=0;i<n+n-1;i++){
            mp[a[i]]++;
        }
        int val=0;
        for(auto i : mp){
            if(i.second==1){
                val=i.first;
            }
        }

        for(int i=0;i<n;i++){
            if(val==arr[i]){
                cout<<i;
                break;
            }
        }

    }
    return 0;
}