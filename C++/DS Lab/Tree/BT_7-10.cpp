#include "BinaryTree.h"
using namespace std;
int main()
{
    treeNode *root = NULL;
    int n;
    cout << "Enter How Many Data You Want To Insert : ";
    cin >> n;
    cout << "Enter All Data : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        root = createBST(root, x);
    }
    string in = "";
    inOrder(root, in);
    cout << "Inorder Before Adding : " << in << endl;
    cout << "Enter The Value You Want To Add : ";
    int p;
    cin >> p;
    root = createBST(root, p);
    string in2 = "";
    inOrder(root, in2);
    cout << "Inorder After Adding : " << in2 << endl;
    cout << "Enter The Value You Want To Delete : ";
    int q;
    cin >> q;
    root = deleteBST(root, q);
    string in3 = "";
    inOrder(root, in3);
    cout << "Inorder After Adding : " << in3 << endl;
}