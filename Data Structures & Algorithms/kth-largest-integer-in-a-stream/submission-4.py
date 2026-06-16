from heapq import heappush,heappop
class KthLargest:
    
    def __init__(self, k: int, nums: List[int]):
        self.heap=[]
        self.k=k
        for a in nums:
            if len(self.heap)< self.k:
                heappush(self.heap,a)
            else :
                if a > self.heap[0] :
                    heappop(self.heap)
                    heappush(self.heap,a)
                

        

    def add(self, val: int) -> int:
            if len(self.heap)< self.k:
                heappush(self.heap,val)
            else :
                if val > self.heap[0] :
                    heappop(self.heap)
                    heappush(self.heap,val)
            return self.heap[0]
            

        
