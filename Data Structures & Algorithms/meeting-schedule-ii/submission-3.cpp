/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        // rooms can be reused.
        // meetings must be sorted by start time to simulate a real world scenario
        // every curr meeting must be checked with the every active meeting to see if room can be reused, therefore active meetins must be tracked based on thier end time dynamically
        int n=intervals.size() ;
        sort(intervals.begin(),intervals.end(),[](const Interval &a, const Interval &b){
            return a.start<b.start ;
        });
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto meeting:intervals){
            if(!pq.empty() && meeting.start>=pq.top()){
                pq.pop();
            }
            pq.push(meeting.end);
        }
        return pq.size();
    }
};
