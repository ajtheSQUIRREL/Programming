#include <bits/stdc++.h>
using namespace std;
void heapify(int array[], int n, int current)
{
    int largest = current;
    int leftChild = 2 * current + 1;
    int rightChild = 2 * current + 2;
    if (array[leftChild] > array[largest] && leftChild < n)
        largest = leftChild;
    if (array[rightChild] > array[largest] && rightChild < n)
        largest = rightChild;
    if (largest != current)
    {
        swap(array[current], array[largest]);
        heapify(array, n, largest);
    }
}
int main()
{
    cout << "Enter How Many Numbers You Want To Insert : ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter The Numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Enter The Index You Want To See : ";
    int index;
    cin >> index;
    cout << "Data : " << arr[index] << endl;
    if (index % 2 == 0)
        cout << "Parent : " << arr[(index - 2) / 2] << endl;
    else
        cout << "Parent : " << arr[(index - 1) / 2] << endl;
    if (index * 2 + 1 < n)
        cout << "LeftChild : " << arr[(index * 2) + 1] << endl;
    else
        cout << "There Is No LeftChild." << endl;
    if (index * 2 + 2 < n)
        cout << "RightChild : " << arr[(index * 2) + 2] << endl;
    else
        cout << "There Is No RightChild." << endl;
}