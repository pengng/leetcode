#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string interpret(string command) {
		string result;
		int i = 0;
		while (i < command.length())
			if (command[i] == 'G')
			{
				result += 'G';
				i++;
			}
			else if (command[i + 1] == ')')
			{
				result += 'o';
				i += 2;
			}
			else
			{
				result += "al";
				i += 4;
			}
		return result;
    }
};

int main() {
	assert(Solution().interpret("G()(al)") == "Goal");
	assert(Solution().interpret("G()()()()(al)") == "Gooooal");
	assert(Solution().interpret("(al)G(al)()()G") == "alGalooG");
}