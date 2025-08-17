class Solution {
public:
    bool isPowerOfAnother(int x, int y) {
        if (x == 1) {
            return (y == 1);
        }
        
        while (y % x == 0) {
            y /= x;
        }
        
        return (y == 1);
    }
};
