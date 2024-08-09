#include<iostream>
using namespace std;
int main()
{
    // int mid1,mid2,l,r,key;

    // int arr[]={10,20,30,40,50,60,70,80};
    // l=0;r=7;
    // key=70;

    int mid1, mid2, l, r;

    int n,key;
    cout<<"Enter the size of array :";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n <<" sorted elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 

    cout<<"Enter the key to search the element :";
    cin>>key;
    l = 0;r = 7;
   
    while(r>=l){

        mid1 = l + (r-l)/3;
        mid2 = r - (r-l)/3;

        if(arr[mid1] == key){
            cout << "Index of element is :" << mid1 << endl;
            return 0;
        }
        else if(arr[mid2] == key){
            cout << "Index of element is :" << mid2 << endl;
            return 0;
        }
        else if(key < arr[mid1]){
            r = mid1 - l;
        }
        else if(key > arr[mid2]){
            l = mid2 + 1;
        }else{
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
}