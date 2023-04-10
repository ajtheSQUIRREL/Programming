    int n;
    cin >> n;
    treeNode *allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;
        if (left != -1)
            allNodes[i]->leftChild = allNodes[left];
        if (right != -1)
            allNodes[i]->rightChild = allNodes[right];
    }
    printTree(allNodes[0], 0);