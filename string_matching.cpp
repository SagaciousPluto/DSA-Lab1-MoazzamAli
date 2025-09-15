#include <iostream>
#include <string>
using namespace std;

int match_string(string str, string sub){
    int strlength = str.length();
    int sublength = sub.length();
    //outer loop iterates through the main string and
    //the inner loop interates through the substring until corresponding
    //characters stop matching
    for(int i =0; i < strlength; i++){
        for(int j = 0; j < sublength; j++){
            if(str[i]!= sub[j])
                break;
            if (j = sublength-1)
                return i;
        }
    }
    return -1;
}

int main(){
    cout<<"Test case for substring at the beginning:"<<endl;
    string str = "something";
    string sub = "som";
    cout<<match_string(str,sub)<<endl;
    cout<<"Test case for substring at the end:"<<endl;
    string sub2 = "ing";
    cout<<match_string(str, sub2)<<endl;
}