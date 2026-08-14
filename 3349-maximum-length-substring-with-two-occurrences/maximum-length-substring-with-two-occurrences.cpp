class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        vector<int> freq(26, 0);
        
        int left = 0;
        int maximum = 0;

        for (int right = 0; right < s.length(); right++) {
            
            // Add the current character
            freq[s[right] - 'a']++;

            // If any character occurs more than 2 times
            while (freq[s[right] - 'a'] > 2) {
                
                // Remove the left character
                freq[s[left] - 'a']--;
                
                // Move left forward
                left++;
            }

            // Calculate current window length
            int currentLength = right - left + 1;

            // Update maximum
            if (currentLength > maximum) {
                maximum = currentLength;
            }
        }

        return maximum;
    }
};