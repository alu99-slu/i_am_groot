#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}

        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            v1.push_back(arr[i]);
            v2.push_back(arr[i]);
        }

        sort(v1.begin(),v1.end());

        int c=0;
        for(int i=0;i<n;i++){
            if(v1[i]==v2[i+1]){
                c=i;
                break;
            }
        }
        if(n-c==n){
            cout<<"0";
        }else{
            cout<<n-c;
        }
        
    }
    return 0;
}