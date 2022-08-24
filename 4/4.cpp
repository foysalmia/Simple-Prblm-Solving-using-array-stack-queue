#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

void checkDuplicateParenthesis(string str){
    MyStack<char> stk;
    bool flag = false;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]== '(' && stk.isEmpty()){
            stk.push(str[i]);
        }
        else if(str[i]== '('){
           if(str[i]==stk.Top()){
                flag = true;
                break;
            }else{
                stk.push(str[i]);
            }
        }else{
            stk.pop();
            stk.push(str[i]);
        };
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    string s;
    cin>>s;
    checkDuplicateParenthesis(s);
    return 0;
}
