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
    assert(nc.find(10) == -1); // û������ 10 �����Է��� -1 ��
    nc.change(2, 10); // �������±�Ϊ 2 ���������� 10 ��
    nc.change(1, 10); // �������±�Ϊ 1 ���������� 10 ��
    nc.change(3, 10); // �������±�Ϊ 3 ���������� 10 ��
    nc.change(5, 10); // �������±�Ϊ 5 ���������� 10 ��
    assert(nc.find(10) == 1); // ���� 10 ���ڵ��±�Ϊ 1 ��2 ��3 �� 5 ����Ϊ��С�±�Ϊ 1 �����Է��� 1 ��
    nc.change(1, 20); // �������±�Ϊ 1 ���������� 20 ��ע�⣬�±� 1 ��֮ǰΪ 10 �����ڱ��滻Ϊ 20 ��
    assert(nc.find(10) == 2); // ���� 10 �����±�Ϊ 2 ��3 �� 5 ����С�±�Ϊ 2 �����Է��� 2 ��
}