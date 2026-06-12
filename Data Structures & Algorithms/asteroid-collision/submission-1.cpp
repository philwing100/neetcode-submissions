class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;

        for (int i = 0; i < asteroids.size(); i++) {
            int curr = asteroids[i];
            bool destroyed = false;

            // collision only when top is going right and curr is going left
            while (!stk.empty() && stk.top() > 0 && curr < 0) {
                int top = stk.top();

                if (abs(curr) > top) {
                    // curr survives, top explodes — keep looping
                    stk.pop();
                } else if (abs(curr) == top) {
                    // both explode
                    stk.pop();
                    destroyed = true;
                    break;
                } else {
                    // curr explodes, top survives
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                stk.push(curr);
            }
        }

        // drain stack into result
        vector<int> res;
        while (!stk.empty()) {
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};