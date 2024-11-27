//reversing of vector array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector<int> v = {5,9,8,4,1,3};
   // for(int i=0;i<v.size();i++){
     //   cout<<v[i];
    //}
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
   
    return 0;
}
