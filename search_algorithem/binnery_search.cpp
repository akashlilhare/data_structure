#include<iostream>

using namespace std;

int binnerySearch(int arr[],int size, int target){

    
    int l = 0;
    int r = size-1;
    int mid = (l+r)/2;

    while(l <= r){
        
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            r = mid  - 1;
        }else{
            l = mid + 1;
        }

        mid = (l+r)/2;
    }
    return -1;
}

int main(){
    int even[] = {2,4,6,8,12,18};
    int odd[] = {3,8,11,14,16};
    int reverseList[] = {3};

    cout<<endl<<"element present at : "<< binnerySearch(reverseList,1, 3);
}