#include<iostream>
#include<algorithm>
using namespace std;

int count(int nums[], int size, int target){
    int ans=0;

    for(int i=0; i<=size; i++){
        if(nums[i]>=target){
            ans++;
        }
        return ans;
    }

    int specialArray(int nums[], int size){
        sort(nums, nums + size);

        int left=0;
        int right=size;

        while(left<=right){
            int mid = left + (right-left) / 2 ;
            int ans=count(nums,size,mid);

            if(ans == mid){
                return mid;
            }
            else if(ans > mid){
                left = mid+1;
            }
            else{
                right = mid-1;
            }

            if(ans!=mid)
        }
    }

}