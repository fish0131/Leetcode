class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0 ;
        for ( int i = 0 ; i < 32 ; ++ i) {
            // if the number which is popped out is equal to 1, "res"+1 and go left
            if (n & 1 == 1 ) {
                res = (res << 1 ) + 1 ;
            } 
            // if the number which is popped out is equal to 0, "res" go left
            else {
                res = res << 1 ;
            }
            // since we need to compute the reverse bits, we go through from left to right
            n = n >> 1 ;
        }
        return res;
    }
};
