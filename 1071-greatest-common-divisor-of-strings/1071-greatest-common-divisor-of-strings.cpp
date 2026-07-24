#include <string>
#include <numeric>

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Step 1: Check if str1 and str2 share a common base pattern
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        // Step 2: Find the GCD of the lengths of both strings
        int gcdLength = std::gcd(str1.length(), str2.length());
        
        // Step 3: Return the prefix of length gcdLength
        return str1.substr(0, gcdLength);
    }
};