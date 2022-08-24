#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

class MyNode{
public:
    int value;
    MyNode* next;
    MyNode(int value){
        this->value = value;
        this->next = NULL;
    }
};

void pushInList(MyNode* &head,int value){
    MyNode* newNode = new MyNode(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    MyNode *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void printList(MyNode* &head){
    MyNode * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value;
        if(tmp->next != NULL){
            cout<<" -> ";
        }
        tmp = tmp->next;
    }
    cout<<endl;
}

MyNode * reverseByStack(MyNode * &head){
    MyStack<int> stk;
    MyNode * tmp = head;
    MyNode * reverseNode = NULL;
    while(tmp!=NULL){
        stk.push(tmp->value);
        tmp = tmp->next;
    }
    while(!stk.isEmpty()){
        pushInList(reverseNode,stk.Top());
        stk.pop();
    }
    return reverseNode;
}

int main(){
    MyNode * head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        pushInList(head,a);
    }
    head = reverseByStack(head);
    printList(head);
}
