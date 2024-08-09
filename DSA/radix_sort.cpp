#include<iostream>
using namespace std;

int main() {
    int a;
    cout << " Enter the size of array : ";
    cin >> a ;

    int arr[a];
    cout << " Enter " << a << " elements : ";

    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    } 
    
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    for (int exp = 1; max / exp > 0; exp *= 10) {
        int output[n]; 
        int count[10] = {0};

        for (int i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "This program is created by 23CS041-DHRUV LOKADIYA" << endl;
    return 0;
}