#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements : ";

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
    
    for (int i=1; i<n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j] > key) // jo arr[j] < key kru to desending order ma print thase..
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout << "Sorted elements : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
