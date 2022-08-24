#include<bits/stdc++.h>
using namespace std;

void PrimesInShort(int n){
    bool arr[n+1];
    memset(arr,true,sizeof(arr));

    for(int i=2;i*i<=n;i++){
        if(arr[i]){
            for(int p=i*i;p<=n;p+=i){
                arr[p] = false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    PrimesInShort(n);
}
