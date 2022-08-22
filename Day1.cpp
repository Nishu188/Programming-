//1009. Complement of Base 10 Integer
class Solution {
public:
    int bitwiseComplement(int n) {
       // int mask=0;
       //  int m=n;
       //  while(n!=0){
       //      mask=(mask << 1) | 1;
       //      m=m>>1;
       //  }
       // int  ans= (~n) & mask;
       //  return ans;
        int mask=0;
        int m=n;
        if(n==0){
         return 1;
        }
        while(m!=0){
            mask=(mask << 1) | 1;
            m=m>>1;
        }
       int  ans= (~n) & mask;
        return ans;
    }
};