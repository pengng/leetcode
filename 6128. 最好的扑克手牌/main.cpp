#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    string bestHand(const vector<int>& ranks, const vector<char>& suits) {
		int i = 1;
		while (i < suits.size() && suits[i] == suits[0])
			i++;
		if (i == suits.size())
			return "Flush";

		vector<int> counts(14);
		for (int i = 0; i < ranks.size(); i++)
			++counts[ranks[i]];

		int largest = *max_element(counts.begin(), counts.end());
		if (largest >= 3)
			return "Three of a Kind";
		else if (largest >= 2)
			return "Pair";

		return "High Card";
    }
};

int main() {
	assert(Solution().bestHand({ 13,2,3,1,9 }, { 'a','a','a','a','a' }) == "Flush");
	assert(Solution().bestHand({ 4,4,2,4,4 }, { 'd','a','a','b','c' }) == "Three of a Kind");
	assert(Solution().bestHand({ 10,10,2,12,9 }, { 'a','b','c','a','d'}) == "Pair");
}