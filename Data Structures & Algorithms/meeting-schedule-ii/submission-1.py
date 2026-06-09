from heapq import heappush, heappop
"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def minMeetingRooms(self, intervals: List[Interval]) -> int:
        # Non Overlapping -> sort by start-> detect conflicts
        # Greedy Choice -> pick the meeting that starts earlier,if overlap, move the later meeting to the next room
        # Exchange arg->  picking the next one, increases the chance of conflict
        if not intervals:return 0
        intervals.sort(key=lambda x:x.start)
        heap=[intervals[0].end]
        
        for interval in intervals[1:]:
            if interval.start >= heap[0]:
                heappop(heap)
            heappush(heap,interval.end)
        
        return len(heap)

        