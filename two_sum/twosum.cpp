#include <iostream>
#include <iterator>
#include <unordered_map>
#include <vector>

using namespace std;

class TwoSum {

public:
  vector<int> twoSum(vector<int> &nums, int target) {

    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {

      int diff = target - nums[i];

      if (map.find(diff) != map.end()) {

        return vector<int>{map[diff], i};
      }

      map[nums[i]] = i;
    }

    return {};
  };
};

int main() {

  TwoSum ts;

  int targ = 9;

  vector<int> ans, test;

  test = {2, 7, 11, 15};
  ans = ts.twoSum(test, targ);

  cout << "[ ";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans.at(i) << ", ";
  };

  cout << " ]\n";

  return 0;
}
