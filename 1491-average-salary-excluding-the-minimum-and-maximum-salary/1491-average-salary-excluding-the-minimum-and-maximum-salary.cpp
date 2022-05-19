class Solution {
public:
    double average(vector<int>& salary) {
        int arraySize = sizeof(salary) / sizeof(salary[0]);
        int smin = INT_MAX;
        int smax = INT_MIN;
        int total = 0;
        for (const auto& s:salary)
        {
            total +=s;
            smax = max(smax , s);
            smin = min(smin , s);
        }
        return (double) (total - smax - smin) / (double)(salary.size()-2);
    }
};