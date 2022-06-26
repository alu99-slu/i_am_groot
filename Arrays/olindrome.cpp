#include <bits/stdc++.h>
using namespace std;
//1st 3 chars would be reverse of next 3 chars and it goes on till last abccbadeffedsouuos

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        queue<int> q;
        
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                continue;
            }else{
                cout<<s[i]<<" ";
            }
        }
        // cout<<s;

        while(!q.empty()){
            char s = q.front();
            // cout<<s<<" ";

            q.pop();
        }
        
    }
    return 0;
}