#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

bool checkPalindrom(string str){
    MyStack<char> stk;
    string result = "";
    for(int i=0;i<str.length();i++){
        stk.push(str[i]);
    }
    while(!stk.isEmpty()){
        result += stk.Top();
        stk.pop();
    }
    if(str == result)return true;
    else return false;
}

int main(){
    string s;
    cin>>s;
    if(checkPalindrom(s)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

    return 0;
}
