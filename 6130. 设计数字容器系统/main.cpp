#include <map>
#include <algorithm>
#include <cassert>
using namespace std;

class NumberContainers {
    map<int, int> numbers;
public:
    NumberContainers() {

    }

    void change(int index, int number) {
        numbers[index] = number;
    }

    int find(int number) {
        for (auto item : numbers)
            if (item.second == number)
                return item.first;
        
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */

int main() {
    NumberContainers nc;
    assert(nc.find(10) == -1); // 没有数字 10 ，所以返回 -1 。
    nc.change(2, 10); // 容器中下标为 2 处填入数字 10 。
    nc.change(1, 10); // 容器中下标为 1 处填入数字 10 。
    nc.change(3, 10); // 容器中下标为 3 处填入数字 10 。
    nc.change(5, 10); // 容器中下标为 5 处填入数字 10 。
    assert(nc.find(10) == 1); // 数字 10 所在的下标为 1 ，2 ，3 和 5 。因为最小下标为 1 ，所以返回 1 。
    nc.change(1, 20); // 容器中下标为 1 处填入数字 20 。注意，下标 1 处之前为 10 ，现在被替换为 20 。
    assert(nc.find(10) == 2); // 数字 10 所在下标为 2 ，3 和 5 。最小下标为 2 ，所以返回 2 。
}