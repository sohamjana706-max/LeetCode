#include <vector>
#include <algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Step 1: Find the maximum candies currently held by any kid
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        
        vector<bool> result;
        result.reserve(candies.size());

        // Step 2: Check if adding extraCandies meets or exceeds maxCandies
        for (int candy : candies) {
            result.push_back(candy + extraCandies >= maxCandies);
        }

        return result;
    }
};