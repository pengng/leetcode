#include <vector>
#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;

class FoodRatings {
    vector<string> names;
    unordered_map<string, int> foods_;
    unordered_map<string, pair<string, int>> cuisines_;
public:
    FoodRatings(const vector<string>& foods, const vector<string>& cuisines, const vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++)
            foods_[foods[i]] = ratings[i];
        for (int i = 0; i < cuisines.size(); i++)
        {
            auto item = cuisines_.find(cuisines[i]);

            if (item == cuisines_.end()) {
                cuisines_[cuisines[i]] = { foods[i], ratings[i] };
                continue;
            }

            if (ratings[i] > cuisines_[cuisines[i]].second || (ratings[i] == cuisines_[cuisines[i]].second && foods[i] < cuisines_[cuisines[i]].first))
            {
                cuisines_[cuisines[i]] = { foods[i], ratings[i] };
            }
        }

        names = foods;
    }

    void changeRating(string food, int newRating) {
        foods_[food] = newRating;
    }

    string highestRated(string cuisine) {
        return cuisines_[cuisine].first;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */

int main() {
    //FoodRatings foodRatings({ "kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi" }, { "korean", "japanese", "japanese", "greek", "japanese", "korean" }, { 9, 12, 8, 15, 14, 7 });
    //assert(foodRatings.highestRated("korean") == "kimchi"); // 返回 "kimchi"
    //                                    // "kimchi" 是分数最高的韩式料理，评分为 9 。
    //assert(foodRatings.highestRated("japanese") == "ramen"); // 返回 "ramen"
    //                                      // "ramen" 是分数最高的日式料理，评分为 14 。
    //foodRatings.changeRating("sushi", 16); // "sushi" 现在评分变更为 16 。
    //assert(foodRatings.highestRated("japanese") == "sushi"); // 返回 "sushi"
    //                                      // "sushi" 是分数最高的日式料理，评分为 16 。
    //foodRatings.changeRating("ramen", 16); // "ramen" 现在评分变更为 16 。
    //assert(foodRatings.highestRated("japanese") == "ramen"); // 返回 "ramen"
    //                                      // "sushi" 和 "ramen" 的评分都是 16 。
    //                                      // 但是，"ramen" 的字典序比 "sushi" 更小。

    FoodRatings foodRatings(
        {"jswlvv", "fytoggqawf", "ubcfux", "syao", "vxigtvsmkg", "ttoc", "qhjaxh", "l", "gsgtwvrscf", "fhujwrf", "wpogjjj", "rurxaxnhmr", "jbierjj", "sbaeccnieb", "rmispzef", "dobrqkjt", "nqbdlvst", "ewvziwkxjd", "uphojrycjc", "powaf", "tnsw", "fggrxldnqa", "ohwjlgaq", "jhsggxjf", "gwpiqtgijm", "uphnbrdevn", "tztworwinj", "augcib", "psgdyv", "garwvctyw", "ajnp", "gmucnrf", "dcnzavdq", "fqgngqd", "zjkogppr", "pfwel", "mjcxxd", "rwurdukexw", "kurp", "uolriylj", "zatlakddvz", "tftlrscq", "hcxnrsjmv", "idyjshi", "mfjqy", "agyouskm", "vuirdeijl", "hcjjuxhpgd", "uvxesputgg", "o", "dxbivvnyz", "ltbhepgj"},
        { "zhxw", "pyfcxw", "ieefebnw", "wtvkietd", "sfamjywu", "ieefebnw", "vqcp", "ozjmgid", "xkkkcbvvdq", "ipxfav", "vqcp", "j", "sfamjywu", "xkkkcbvvdq", "utyizvaoiw", "ieefebnw", "j", "ozjmgid", "ipxfav", "ozjmgid", "ipxfav", "jrkeaqrtmn", "ipxfav", "utyizvaoiw", "pyfcxw", "jbotbhdbzu", "ozjmgid", "jrkeaqrtmn", "louyhq", "ozjmgid", "j", "sfamjywu", "ozjmgid", "wblwrduw", "zhxw", "jbotbhdbzu", "cjbmm", "gqddoxrrcv", "wblwrduw", "zhxw", "ieefebnw", "sfamjywu", "pyfcxw", "wtvkietd", "klvkmtxiwn", "cjbmm", "ipxfav", "ieefebnw", "gqddoxrrcv", "vqcp", "cjbmm", "vqcp" },
        { 14, 960, 74, 967, 864, 672, 243, 892, 544, 411, 274, 797, 272, 480, 390, 857, 414, 859, 2, 556, 64, 993, 879, 219, 27, 16, 733, 410, 34, 399, 446, 796, 730, 452, 922, 529, 437, 801, 741, 258, 209, 858, 50, 711, 871, 452, 770, 873, 292, 84, 870, 357 });

    foodRatings.changeRating("hcxnrsjmv", 15); // "sushi" 现在评分变更为 16 。
    assert(foodRatings.highestRated("sfamjywu") == "vxigtvsmkg"); // 返回 "ramen"
    foodRatings.changeRating("hcxnrsjmv", 386); // "sushi" 现在评分变更为 16 。
    assert(foodRatings.highestRated("jrkeaqrtmn") == "fggrxldnqa"); // 返回 "ramen"
    foodRatings.changeRating("hcjjuxhpgd", 922); // "sushi" 现在评分变更为 16 。
    foodRatings.changeRating("uphnbrdevn", 969); // "sushi" 现在评分变更为 16 。
    foodRatings.changeRating("uolriylj", 658); // "sushi" 现在评分变更为 16 。
    assert(foodRatings.highestRated("gqddoxrrcv") == "rwurdukexw"); // 返回 "ramen"
    foodRatings.changeRating("vuirdeijl", 20); // "sushi" 现在评分变更为 16 。
    foodRatings.changeRating("pfwel", 69); // "sushi" 现在评分变更为 16 。
    assert(foodRatings.highestRated("zhxw") == "zjkogppr"); // 返回 "ramen"

}

//["highestRated", "changeRating", "changeRating", "highestRated", "highestRated", "changeRating", "highestRated", "highestRated", "changeRating", "highestRated"]
//[["zhxw"], ["mjcxxd", 782], ["o", 245], ["sfamjywu"], ["ozjmgid"], ["ttoc", 817], ["ipxfav"], ["jrkeaqrtmn"], ["nqbdlvst", 547], ["gqddoxrrcv"]]