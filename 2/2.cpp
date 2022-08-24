#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

void prefixEvalution(string str){
    //reverse(str.begin(),str.end());
    MyStack<int> stk;

    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            stk.push(str[i]-'0');
        }else{
            int a,b;
            a = stk.Top();
            stk.pop();
            b = stk.Top();
            stk.pop();
            switch(str[i]){
            case '+' :
                stk.push(a+b);
                break;
            case '-' :
                stk.push(a-b);
                break;
            case '*' :
                stk.push(a*b);
                break;
            case '/' :
                stk.push(a/b);
                break;
            case '^' :
                stk.push(pow(a,b));
                break;
            default:break;
            }
        }
    }

    cout<<stk.Top()<<endl;
}

int main(){
    string s;
    cin>>s;
    prefixEvalution(s);

    return 0;
}
