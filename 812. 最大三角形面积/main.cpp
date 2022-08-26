#include<vector>
#include<cmath>
#include<cassert>
using namespace std;

class Solution {
public:
    double largestTriangleArea(const vector<vector<int>>& points) {
		auto largest = 0.0;
		for (auto i = 0; i < points.size() - 2; i++)
		{
			for (auto j = i + 1; j < points.size() - 1; j++)
			{
				for (auto k = j + 1; k < points.size(); k++)
				{
					auto a = distance(points[i][0], points[i][1], points[j][0], points[j][1]);
					auto b = distance(points[i][0], points[i][1], points[k][0], points[k][1]);
					auto c = distance(points[j][0], points[j][1], points[k][0], points[k][1]);
					if (!(a + b > c && a + c > b && b + c > a)) continue;
					auto p = (a + b + c) / 2;
					auto s = sqrt(p * (p - a) * (p - b) * (p - c));
					if (s > largest) largest = s;
				}
			}
		}
		return largest;
    }
private:
	double distance(int x1, int y1, int x2, int y2) {
		return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	}
};

int main() {
	assert(Solution().largestTriangleArea({ {0,0},{0,1},{1,0},{0,2},{2,0} }) - 2.0 < 1e-6);
	assert(Solution().largestTriangleArea({ {0,0},{0,1},{1,0} }) - .5 < 1e-6);
}