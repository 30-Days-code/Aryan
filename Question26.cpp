#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root;
 
class BST
{
    public:
    
    BST()
    {
        root = NULL;
    }
    
    node * Find(node *, int);
    void Search(int, node **, node **);    
    void Insert(node *, node *);
    void Delete(int);
    void CaseA(node *, node *);
    void CaseB(node *, node *);
    void CaseC(node *, node *);
    void Display(node *, int);
};

node * BST::Find(node *no, int data) // Find Element in the Tree For The User
{
    if(no == NULL)
    {
        return (NULL);
    }
    
    if(data > no->info)
    {
        return Find(no->right, data);
    }
    else if(data < no->info)
    {
        return Find(no->left, data);
    }
    else
    {
        return no;
    }
}

void BST::Search(int item, node **par, node **loc) // Find Element in the Tree For The Program
{
    node *ptr, *ptrsave;
    
    if (root == NULL)
    {
        *loc = NULL;
        *par = NULL;
        
        return;
    }
    
    if (item == root->info)
    {
        *loc = root;
        *par = NULL;
        
        return;
    }
    
    if (item < root->info)
    {
        ptr = root->left;
    }    
    else
    {
        ptr = root->right;
    }
    
    ptrsave = root;
    
    while (ptr != NULL)
    {
        if (item == ptr->info)
        {
            *loc = ptr;
            *par = ptrsave;
            
            return;
        }
        
        ptrsave = ptr;
        
        if (item < ptr->info)
        {
            ptr = ptr->left;
        }
	    else
	    {
	        ptr = ptr->right;
	    }
    }
    
    *loc = NULL;
    *par = ptrsave;
}

void BST::Insert(node *tree, node *newnode) // Inserting Element into the Tree
{
    if (root == NULL)
    {
        root = new node;
        root->info = newnode->info;
        root->left = NULL;
        root->right = NULL;
        
        cout<<"\n Root Node is Added !! \n";
        return;
    }
    
    if (tree->info == newnode->info)
    {
        cout<<"\n Element already in the tree !! \n";
        return;
    }
    
    if (tree->info > newnode->info)
    {
        if (tree->left != NULL)
        {
            Insert(tree->left, newnode);	
	    }
	    else
	    {
            tree->left = newnode;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            
            cout<<"\n Node Added To Left !! \n";
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            Insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            (tree->right)->left = NULL;
            (tree->right)->right = NULL;
            
            cout<<"\n Node Added To Right !! \n";
            return;
        }	
    }
}

void BST::Delete(int item) // Delete Element from the tree
{
    node *parent, *location;
    
    if (root == NULL)
    {
        cout<<"\n Tree is Empty !! \n"<<endl;
        return;
    }
    
    Search(item, &parent, &location);
    
    if (location == NULL)
    {
        cout<<"\n Item not present in tree !! \n"<<endl;
        return;
    }
    
    if (location->left == NULL && location->right == NULL)
    {
        CaseA(parent, location);
    }
    
    if (location->left != NULL && location->right == NULL)
    {
        CaseB(parent, location);
    }
    
    if (location->left == NULL && location->right != NULL)
    {
        CaseB(parent, location);
    }
    
    if (location->left != NULL && location->right != NULL)
    {
        CaseC(parent, location);
    }
    
    free(location);
}

void BST::CaseA(node *par, node *loc ) // Case A
{
    if (par == NULL)
    {
        root = NULL;
    }
    else
    {
        if (loc == par->left)
        {
            par->left = NULL;
        }
        else
        {
            par->right = NULL;
        }
    }
}

void BST::CaseB(node *par, node *loc) // Case B
{
    node *child;
    
    if (loc->left != NULL)
    {
        child = loc->left;
    }
    else
    {
        child = loc->right;
    }
    
    if (par == NULL)
    {
        root = child;
    }
    else
    {
        if (loc == par->left)
        {
            par->left = child;
        }
        else
        {
            par->right = child;
        }
    }
}

void BST::CaseC(node *par, node *loc) // Case C
{
    node *ptr, *ptrsave, *suc, *parsuc;
    
    ptrsave = loc;
    ptr = loc->right;
    
    while (ptr->left != NULL)
    {
        ptrsave = ptr;
        ptr = ptr->left;
    }
    
    suc = ptr;
    parsuc = ptrsave;
    
    if (suc->left == NULL && suc->right == NULL)
    {
        CaseA(parsuc, suc);
    }
    else
    {
        CaseB(parsuc, suc);
    }
    
    if (par == NULL)
    {
        root = suc;
    }
    else
    {
        if (loc == par->left)
        {
            par->left = suc;
        }
        else
        {
            par->right = suc;
        }
    }
    
    suc->left = loc->left;
    suc->right = loc->right;
}

void BST::Display(node *ptr, int level) // Display Tree Structure
{
    int i;
    
    if (ptr != NULL)
    {
        Display(ptr->right, level+1);
        cout<<endl;
        
        if (ptr == root)
        {
            cout<<" Root->  ";
        }
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	    }
	    
        cout<<ptr->info;
        Display(ptr->left, level+1);
    }
}

int main()
{
    int choice, num, ch;
    BST bst;
    node *temp;
    
    while (1)
    {
        cout<<"\n\n Select An Option : \n 1. Insert \n 2. Delete "
            <<"\n 3. Display \n 4. Search \n 5. Exit \n Your Choice : ";
        cin>>choice;
        
        switch(choice)
        {
        case 1: {
                    temp = new node;
                    
                    cout<<"\n Enter the number to be inserted : ";
	                cin>>temp->info;
	                
                    bst.Insert(root, temp);
                }
        break; 
        
        case 2: {
                    if (root == NULL)
                    {
                        cout<<"\n Tree is Empty !! Nothing to Delete !! \n"<<endl;
                        continue;
                    }
                    
                    cout<<"\n Enter the number to be deleted : ";
                    cin>>num;
                    
                    bst.Delete(num);
                }    
        break;
        
        case 3: {
                    cout<<"\n Display BST : \n";
                    
                    bst.Display(root, 1);
                    cout<<endl;
                }
        break;
        
        case 4: {
                    cout<<"\n Enter element to be searched : ";
                    cin>>ch;
                    
                    temp = bst.Find(root, ch);
                    
                    if(temp == NULL)
                    {
                        cout<<"\n Element is not found !!!";
                    }
                    else
                    {
                        cout<<"\n Element "<<temp->info<<" is Found ";
                    }
                }
        break;
        
        case 5: exit(1);
        break;
        
        default: cout<<"\n Option Not Available !! \n";
        }
    }
    
    return 0;
}