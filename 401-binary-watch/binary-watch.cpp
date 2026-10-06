class Solution {
public:
    int countSetBits(int n) {
        int ans = 0;
        while (n > 0) {
            if (n & 1)
                ans++;
            n >>= 1;
        }
        return ans;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        
        for (int hour = 0; hour < 12; hour++) {             // {0 to 11}
            for (int minute = 0; minute < 60; minute++) {   // {0 to 59}
                if (countSetBits(hour) + countSetBits(minute) == turnedOn) {
                    string time = to_string(hour) + ":";
                    
                    if (minute < 10) {
                        time += "0";
                    }
                    
                    time += to_string(minute);
                    res.push_back(time);
                }
            }
        }
        return res;
    }
}; 
