#include <iostream>

using namespace std;

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> result;
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i].end<newInterval.start)
            {
                result.push_back(intervals[i]);
            }
            else if(intervals[i].start>newInterval.end)
            {
                result.push_back(newInterval);
                result.insert(result.end(),intervals.begin()+i,intervals.end());
                return result;
            }
            else
            {
                newInterval.start=min(newInterval.start,intervals[i].start);
                newInterval.end=max(newInterval.end,intervals[i].end);
            }
        }
        result.push_back(newInterval);
        return result;

        
        
    }
};
int main(int argc, char *argv[]) {
	
}