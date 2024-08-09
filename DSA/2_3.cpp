#include <iostream>
using namespace std;

void rearrange(int arr[], int N) {
    for (int i=0; i<N-1; i++) {
        if (i%2 == 0)
        {
            if (arr[i] > arr[i+1])
                {
                swap(arr[i], arr[i+1]);
                }
            } 
            else 
            {
            if (arr[i] < arr[i+1])
                {
                swap(arr[i], arr[i+1]);
                }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i=0; i<N; i++)
        {
            cin >> arr[i];
        }
        
        rearrange(arr, N);
        for (int i=0; i<N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
