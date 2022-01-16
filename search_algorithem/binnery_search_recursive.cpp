#include<bits/stdc++.h>
using namespace std;

bool binnerySearch(int arr[],int start, int end,int key){

if(end >= start){
   
    int mid = start +(end-start)/2;
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] > key){
      return  binnerySearch(arr,start, mid-1, key);
    }else{
      return  binnerySearch(arr,mid+1, end, key);
    }

}
    return false;
}

int main(){
    int arr[] ={1,2,3,4,5,6};
    int key = 4;
   
 if(binnerySearch(arr,0,5,4)){
     cout<<"found";
}else{
     cout<<"not found";
 } 

}