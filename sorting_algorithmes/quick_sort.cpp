#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &vec, int s, int e){
    int pivot = vec[s];

    int count = 0;

    for(int i=s+1; i<=e; i++){
        if(vec[i] <= pivot){
            count ++;
        }
    }

    // place pivot at right position
    int piovtIndex = s + count;
    swap(vec[piovtIndex], vec[s]);

    int i = s;
    int j = e;

    while(i<piovtIndex and j > piovtIndex){
        while(vec[i] <pivot){
            i++;
        }

        while(vec[j] > pivot){
            j--;
        }
        if(i<piovtIndex and j > piovtIndex){
            swap(vec[i++], vec[j--]);
        }
    }

    return piovtIndex;
}

void quickSort(vector<int> &vec, int s, int e){
    if(s >= e){
        return;
    }

    int p = partition(vec, s, e);

    quickSort(vec, s, p-1);
    quickSort(vec, p+1, e);

}

int main(){
    vector<int> vec = {2,4,1,6,9,0,10,1,18};

    quickSort(vec, 0, vec.size());

    for(auto i : vec){
        cout<<i<<" ";
    }


}