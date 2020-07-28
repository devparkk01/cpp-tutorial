#include<iostream>
#include <queue>

using namespace std ; 

// using queue to print the level order traversal of the tree 

class Node  
{
    public :
    int data ; 
    Node * left; 
    Node * right ;

    Node (int data ) : data(data) 
    {
        left = nullptr ; 
        right = nullptr; 
    }

} ;

class BST 
{
    public :
    Node * root ; 
    BST () 
    {   root = nullptr ; }
} ;

void level_order (Node * root) 
{
    if (root  == nullptr ) return ;
    queue<Node * > traversal ;
    traversal.push(root)  ;
    while (!traversal.empty() ) {
        auto curr_node = traversal.front() ; 
        cout << curr_node->data << " " ;
        if (curr_node->left != nullptr) traversal.push(curr_node->left) ;
        if (curr_node->right != nullptr ) traversal.push(curr_node->right) ;
        traversal.pop() ; 
    }
    cout << endl; 
} 




int main () 
{
    BST tree ; 
    tree.root = new Node (10) ; 
    tree.root->left = new Node (8) ;
    tree.root->right = new Node(14) ;
    tree.root->left->left = new Node(3) ; 
    tree.root->left->right = new Node (9) ;
    tree.root->right->left = new Node(12) ;
    tree.root->right->right = new Node(15) ;

    // let's print the lever order traversal of the tree 
    cout << "Level order traversal : " << endl ; 
    level_order(tree.root) ; 

    return 0 ;


}
