class Solution {
public:
    int bitwiseComplement(int n) {
        int c = 1;
        while(c < n)
        {
            c = (c << 1) + 1;
        }
        return c ^ n;
    }
};

// We first create a mask with the help of left shifting a variable containing 1, and then adding 1 to it. Once the multi 1 mask is created, we can xor the input with the mask to obtain the complement of the input number.