#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

array<int,2> arr[26] ;
string s = "AABACDACA";

struct Node* huffman(){
    
    for(int i =0; i<26;++i){
        arr[i][0] = 0, arr[i][1] = i;
        //cout << char(i+65) <<" ";
    }
    for(char it: s){
        arr[int(it)-65][0]+=1 ;
        //cout<< arr[int(it)-65][0]<<" "<< it <<" "<< int(it)<< endl;
    }
    sort(arr, arr+26);
    cout << "done"<<endl;
    struct Node* first = NULL;
    struct Node* root = new Node(0);
    
    for (int i =0; i<26;++i){
        if(arr[i][0]!=0){
            struct Node* second = new Node(arr[i][0]);
            struct Node* root = new Node(0);
            root->left = second;
            root->right = first;
            cout << "done"<<endl;
            if (first == NULL)
            root->data = second->data;
            else
            {
                root->data = root->left->data + root->right->data;
            }
            first = root;
            cout << root->data << endl;

        //cout << arr[i][0] << " " << arr[i][1]<<" " << char(arr[i][1]+65)<<"\n";
        }
    }
    return first;
}

void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 

int main(){
    struct Node* root = NULL;
    root = huffman();
    printInorder(root);
    return 0;
}