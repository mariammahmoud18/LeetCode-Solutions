// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        set<int> s;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(isBadVersion(mid))
                {
                    //found it and checking its previous vers
                    s.insert(mid);
                    end = mid - 1;
                }
            else if (!isBadVersion(mid))
                {start = mid + 1;}
            
        }
        return *(s.begin());
    }
};