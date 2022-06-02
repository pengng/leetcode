#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        istringstream input(text);
        string content;
        vector<string> list;
        vector<string> results;

        while (input >> content) list.push_back(content);

        for (int i = 0; i < list.size() - 2; i++)
        {
            if (list[i] == first && list[i + 1] == second) results.push_back(list[i + 2]);
        }

        return results;
    }
};

void print(vector<string> texts) {
    for (auto text : texts)
    {
        cout << text << " ";
    }

    cout << endl;
}

int main() {
    print(Solution().findOcurrences("alice is a good girl she is a good student", "a", "good"));
}