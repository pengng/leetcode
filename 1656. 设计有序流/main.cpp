#include <vector>
#include <string>
#include <cassert>
using namespace std;

class OrderedStream {
    vector<string> stream;
    int ptr = 1;
public:
    OrderedStream(int n) : stream(vector<string>(n + 1)) {}

    vector<string> insert(int idKey, string value) {
        stream[idKey] = value;
        vector<string> result;
        while (ptr < stream.size() && stream[ptr] != "")
            result.push_back(stream[ptr++]);
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
int main() {
    OrderedStream obj{ 5 };
    assert(obj.insert(3, "ccccc") == (vector<string>{}));
    assert(obj.insert(1, "aaaaa") == (vector<string>{"aaaaa"}));
    assert(obj.insert(2, "bbbbb") == (vector<string>{"bbbbb", "ccccc"}));
    assert(obj.insert(5, "eeeee") == (vector<string>{}));
    assert(obj.insert(4, "ddddd") == (vector<string>{"ddddd", "eeeee"}));
}