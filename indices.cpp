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

    cout<<"Getting results for key not present:"<<endl;
    int arr2[] = {6,2,4,8,9};
    vector<int> indices2 = get_positions(arr2, 5, 90);
    for(auto x: indices2){
        cout<<x<<endl;
    }
    
    cout<<"Getting results for empty array:"<<endl;
    int arr3[] = {};
    vector<int> indices3 = get_positions(arr3, 0, 480);
    for(auto x: indices3){
        cout<<x<<endl;
    }
}