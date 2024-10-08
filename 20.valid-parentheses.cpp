/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
      if (st.empty()) {
        st.push(c);
        continue;
      }

      if (c == ')' and st.top() == '(') {
        st.pop();
        continue;
      }
      if (c == ']' and st.top() == '[') {
        st.pop();
        continue;
      }
      if (c == '}' and st.top() == '{') {
        st.pop();
        continue;
      }

      st.push(c);
    }

    return st.empty();
  }
};
// @lc code=end

/*
Note: pop when you found the opening brace at the top of stack
*/
