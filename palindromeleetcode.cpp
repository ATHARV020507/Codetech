class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int reverse = 0;
        int temp = x;
        for(;temp>0;){
            int d=temp%10;
            reverse = reverse*10+d;
            temp = temp/10;
        }
        return (reverse == x);
        
    }
    int main (){
        int x = -121;
        if (isPalindrome(x) == 1){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
        return 0;
    }
    
};
