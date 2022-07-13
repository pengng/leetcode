#include <iostream>
#include <queue>

using namespace std;

class RecentCounter {
    queue<int> requests;
public:
    RecentCounter() {

    }

    int ping(int t) {
        requests.push(t);
        while (requests.front() < t - 3000)
            requests.pop();
        return requests.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

int main() {
    RecentCounter recentCounter;
    cout << recentCounter.ping(1) << endl;     // requests = [1]，范围是 [-2999,1]，返回 1
    cout << recentCounter.ping(100) << endl;   // requests = [1, 100]，范围是 [-2900,100]，返回 2
    cout << recentCounter.ping(3001) << endl;  // requests = [1, 100, 3001]，范围是 [1,3001]，返回 3
    cout << recentCounter.ping(3002) << endl;  // requests = [1, 100, 3001, 3002]，范围是 [2,3002]，返回 3
}