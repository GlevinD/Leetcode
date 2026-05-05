class Solution {
public:
    bool validDigit(int n, int x) {
        bool valid = false;
        while(n > 0){
            int d = n % 10;
            if(d == x && n < 10){
                valid = false;
            }else if(d == x){
                valid = true;
            }
            n /= 10;
        }
        return valid;
    }
};
