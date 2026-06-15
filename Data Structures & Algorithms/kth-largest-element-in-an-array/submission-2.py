from heapq import heappush,heappop
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        n=len(nums)
        heap=[]
        for a in nums :
            if len(heap) < k :
                heappush(heap,a)
            else :
                if a > heap[0] :
                    heappop(heap)
                    heappush(heap,a)
        
        return heap[0]
        