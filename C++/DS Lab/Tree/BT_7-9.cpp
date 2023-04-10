#include "BinaryTree.h"
using namespace std;
int main()
{
    treeNode *root = NULL;
    int n;
    cout << "Enter How Many Data You Want To Insert : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        root = createBST(root, x);
    }
    string in = "";
    inOrder(root, in);
    cout << "Inorder : " << in << endl;
}