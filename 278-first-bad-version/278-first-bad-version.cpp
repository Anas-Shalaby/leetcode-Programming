// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long int first = 0 , last = n  ,result = n;
        long int mid=0;
        while(first <= last)
        {
            mid = (first+ last) / 2;
            if(isBadVersion(mid)){
                result = mid;
                last = mid-1;
            }else
            {
                first = mid +1;
            }
        }
        return result;
    }
};