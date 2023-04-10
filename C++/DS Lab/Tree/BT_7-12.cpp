#include <bits/stdc++.h>
using namespace std;
void heapify(int array[], int n, int current)
{
    int largest = current;
    int leftChild = 2 * current + 1;
    int rigarrChild = 2 * current + 2;
    if (array[leftChild] > array[largest] && leftChild < n)
        largest = leftChild;
    if (array[rigarrChild] > array[largest] && rigarrChild < n)
        largest = rigarrChild;
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
    int arr[1000];
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
    cout << "Data In The Heap : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Insert Two Data You Want To Insert : ";
    int x;
    int y;
    cin >> x >> y;
    n++;
    arr[n - 1] = x;
    nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    n++;
    arr[n - 1] = y;
    nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Data In The Heap After Adding Two Data : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Deleting Root. " << endl;
    arr[0] = arr[n - 1];
    n = n - 1;
    nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Data In The Heap After Deleting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}