#include<bits/stdc++.h>

using namespace std;

void per(vector<int> input, vector<int> output, vector<vector<int>> &ans, int index){
    if(input.size() <= index){
        ans.push_back(output);
        return;
    }

    per(input, output, ans, index+1);

    int temp = input[index];
    output.push_back(temp);
    per(input,output,ans,index+1);
    
}

// for string input

// void per(string input, string output, vector<string> &ans, int index){
//     cout<<"ptr1";
//     if(input.size() <=index){
//         ans.push_back(output);
//         return;
//     }

//     per(input, output, ans, index+1);

//     char temp = input[index];
//     output.push_back(temp);
//     per(input, output, ans, index+1);
// }

int main(){

    vector<int> input = {1,2,3};
    vector<int> output = {};

    vector<vector<int>> ans ={};

    int index =0;

    per(input,output,ans, index);

    for(auto i : ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

cout<<"end";

}