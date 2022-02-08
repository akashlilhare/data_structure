#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v){
    for(int i =0; i<v.size()-1; i++){
        bool swaped = false;
        for(int j=i+1; j<v.size(); j++){
            if(v[i] > v[j]){
                swap(v[i], v[j]);
                swaped = true;
            }
        }
        if(swaped == false){
            break;
        }
    }
}

int main(){
    vector<int> v = {10,1,7,6,14,9};
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    bubbleSort(v);
    for(auto i : v){
        cout<<i<<" ";
    }
}