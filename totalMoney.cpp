class Solution {
public:
    int totalMoney(int n) {
        int curr=1;
        int start=1;
        int i=1;
        while(i<n){
            if(i%7==0){
                start++;
            }
            curr+=(start+(i%7));
            i++;
        }
        return curr;
    }
};
