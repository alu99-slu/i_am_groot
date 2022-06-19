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

        int val1=0,val2=0;

        if(n==1){
            cout<<"1"<<endl;
        }

        for(int i=0;i<n;i++){
                val1+=arr[i];
            }

        for(int i=1;i<n;i++){
            val2+=arr[i-1];
            if(val2 == val1-val2-arr[i]){
                cout<<i+1<<endl;
            }
        }
        
    }
    return 0;
}