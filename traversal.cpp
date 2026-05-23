#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void inorder(Node *root,vector<int>&arr){
    if(root==nullptr){
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
void preOrder(Node *root,vector<int>&arr2){
    if(root==nullptr){
        return;
    }
    arr2.push_back(root->data);
    preOrder(root->left,arr2);
    preOrder(root->right,arr2);
}
void postOrder(Node *root,vector<int>&arr3){
    if(root==nullptr){
        return ;
    }
    postOrder(root->left,arr3);
    postOrder(root->right,arr3);
    arr3.push_back(root->data);
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->left=new Node(8);
    root->right=new Node(3);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->left=new Node(9);
    root->right->right->right=new Node(10);
    vector<int>arr;
    inorder(root,arr);
    cout<<"INORDER TRAVERSAL";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"PREORDER TRAVERSAL";
    vector<int>arr2;
    preOrder(root,arr2);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"POSTORDER TRAVERSAL";
    vector<int>arr3;
    postOrder(root,arr3);
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}