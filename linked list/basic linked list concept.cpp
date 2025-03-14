#include <bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
public:
    Node(int val,Node*next1){
        next=next1;
        data=val;
    }
    Node(int val){
        data=val;
        next=nullptr;
    }
};
Node* convertArr2ll(vector<int>arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main() {
    
    vector<int>arr={10,2,3,4,5,5};
    Node *head=convertArr2ll(arr);
    cout<<head->data;
    

    return 0;
}
