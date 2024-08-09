#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;
  int count = 0;
    int keys;

void printArray(int arr[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


 for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        if(keys==arr[i][j]){
            cout<<endl;
            cout << endl;
            cout << "Index is : " << "["<<i<<"]" << "["<<j<< "]";
        }
    }
 }
}

int main() {

    
        int k;
        cout<<"Enter keys: ";
        cin>>keys;

    int array2D[ROWS][COLS] = {
        {1,  2,  3},
        {11, 12, 15},
        {13, 17, 14},
    };

    cout << "Array elements:" << endl;
    printArray(array2D, ROWS, COLS);

    return 0;
}
