#include <iostream>
#include <vector>
using namespace std;

vector<int> get_positions(int arr [], int size ,int num){
    vector<int> indices;
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            indices.push_back(i);
        }
    }
    return indices;
}

int main(){
    int arr[] = {3,1,3,7,4,90,3,23};
    vector<int> indices = get_positions(arr,8 ,3);
    for(auto x: indices){
        cout<<x<<endl;
    }
}