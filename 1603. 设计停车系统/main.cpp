#include <vector>
#include <cassert>
using namespace std;

class ParkingSystem {
    vector<int> counts;
public:
    ParkingSystem(int big, int medium, int small) {
        counts = { big, medium, small };
    }

    bool addCar(int carType) {
        return counts[carType - 1]-- > 0;
    }
};

int main() {

    ParkingSystem obj(1, 1, 0);
    assert(obj.addCar(1) == true);
    assert(obj.addCar(2) == true);
    assert(obj.addCar(3) == false);
    assert(obj.addCar(1) == false);
}