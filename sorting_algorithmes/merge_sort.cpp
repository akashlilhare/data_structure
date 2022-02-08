#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &vec, int start, int end){
    int mid = (start + end)/2;
    int l1 = mid- start + 1;
    int l2 = end - mid;

    cout<<"here " <<start<< " " << end<<endl;

    vector<int> vec1(l1);
    vector<int> vec2(l2);

    int k = start;

    for(int i = 0; i<l1; i++){
        vec1[i] = vec[k++];
    }

    k = mid+1;

    for(int i= 0; i< l2; i++){
        vec2[i] = vec[k++];
    }

    //merge 2 sorted arrey

    int idx1 = 0;
    int idx2 = 0;
    int idx = start;

    while(idx1 < l1 and idx2 < l2){
        
        if(vec1[idx1] > vec2[idx2]){
            vec[idx++] = vec1[idx1++];
        }else{
            vec[idx++] = vec2[idx2++];
        }
        
    }

    while(idx1 < l1){
        vec[idx++] = vec1[idx1++];
        
    }
    

    while(idx2 < l2){
        vec[idx++] = vec2[idx2++];
        cout<<"end";
    }

    

}

void mergeSort(vector<int> &vec, int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end)/2;
    
    mergeSort(vec, start, mid );
    mergeSort(vec, mid+1, end);

    merge(vec, start, end);
}


int main(){

    vector<int> vec = {5,3,6,2,7,1,10};
    
    cout<<endl;
    mergeSort(vec, 0, vec.size()-1);
    cout<<endl;
    for(auto i : vec){
        cout<<i<< " ";
    }

} 