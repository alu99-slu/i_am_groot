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

        unordered_map <int,int> m;
        double div = 0.5*(double)n;
        int count=0;

        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(m[arr[i]]>div){
                cout<<arr[i];
                count++;
            }
        }

        if(count==0)
        cout<<"-1";
        
    }
    return 0;
}