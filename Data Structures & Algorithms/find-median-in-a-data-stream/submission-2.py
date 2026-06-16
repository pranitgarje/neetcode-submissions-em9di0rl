from heapq import heappush,heappop
class MedianFinder:
    def __init__(self):
        self.lower=[]
        self.upper=[]
        

    def addNum(self, num: int) -> None:
        if self.upper and num > self.upper[0] :
            heappush(self.upper,num)
        else :
            heappush(self.lower,-1*num)
        if len(self.lower) > len(self.upper) + 1:
            heappush(self.upper,-1*self.lower[0])
            heappop(self.lower)
        if len(self.upper) > len(self.lower) + 1 :
            heappush(self.lower,-1*self.upper[0])
            heappop(self.upper)
            
        
        

    def findMedian(self) -> float:
        if len(self.lower)==len(self.upper) :
            return ((-1*self.lower[0])+self.upper[0])/2.0
        elif len(self.upper)>len(self.lower):
            return self.upper[0]
        else :
            return -1*self.lower[0]

        
        