#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

void reverseString(string str){
    MyStack<char> stk;
    string res = "";
    for(int i=0;i<str.length();i++){
        stk.push(str[i]);
    }
    while(!stk.isEmpty()){
        res += stk.Top();
        stk.pop();
    }
    cout<<res<<endl;
}

int main(){
    string a;
    cin>>a;
    reverseString(a);
    return 0;
}
