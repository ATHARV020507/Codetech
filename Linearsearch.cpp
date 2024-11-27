//vector linear search
#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int> arr , int search){
    for(int i=0;i < arr.size(); i++){
        if(arr[i]==search){
            return i;
        }
    }
    cout<<"-1 for element not found:"<<endl;
    return -1;
}

int main () {
    vector <int> arr = {43,5,6,7,9,10,57};
    int search = 0;
    int i = linearsearch(arr,search);
    if (i != -1){
        cout<<"element found at position"<<i+1;
    }
    else{
        cout<<"element not found:";
    }
    return 0;
}
