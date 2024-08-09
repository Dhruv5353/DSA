#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << " Enter " << n << " elements : ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    } 
    
    int x,y,temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << " Sorted  elements : ";
    for (int i=0; i<n; i++)
    {
        cout << arr[n-i-1] << " ";
    }
}