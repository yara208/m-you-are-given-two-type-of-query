//binary search tree
#include <iostream>
#include <queue>
using namespace std;
struct node
{
    int x;
    struct node *Left;
    struct node *right;
    struct node*root;
    node(int x)
    {
        this->x= x;
        node *Left= NULL;
        node *right= NULL;
        node*root =root;
    }
};
class binary
{
    int s;
    node *root;
    void insertion(node *root, int x)
    {
        if (root == NULL)
        {
            root = new node(x);
        }
        if (x > root->x)
        {
            insertion(root->right, x);

        }
        else
        {
            insertion(root-> Left, x);

        }
    }
    void order(node *root)
    {
        if (root != NULL)
        {
            order(root->Left);
            cout << root->x << " "<<endl;
            order(root->right);
        }
        else
            return;
    }

    int index(node *root, int x)
    {
        if (root == NULL)
        {
            return -1;
        }
        if (x > root->x)
        {
            return index(root->right, x);

        }
        else if (x < root->x)
        {
            return index(root->Left, x);


        }
        else
        {
            return root->x;
        }
    }


public:
    binary()   //constructor
    {
        root = NULL;
        s = 0;
    }
    //~binary();  // destructor
    void insertion(int x)
    {
        insertion(root, x);
        s++;
        cout<<endl;
    }
    void order()
    {
        order(root);
        cout << endl<<endl;
    }
    int index(int x)
    {
        return index(root, x);
    }

};

int main()
{
    int n;
    int x;  //data
    int i ;
    int q;
    cin >> n;
    binary obj;
    for(i=0; i<=n; n--)
    {
        cin >> q;
        if (q == 1)
        {
            cin >> x;
            obj.insertion(x);
        }
        else
        {
            cin >> x;
            cout << obj.index(x) << endl;
        }
    }

    return 0;
}

