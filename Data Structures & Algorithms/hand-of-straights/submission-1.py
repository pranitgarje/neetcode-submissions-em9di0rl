
class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if len(hand)<groupSize or len(hand)%groupSize!=0:
            return False
        hand.sort()
        freq={}
        for i in range(len(hand)):
            freq[hand[i]]=freq.get(hand[i],0)+1
        
        for a in hand :
            if a not in freq:
                continue
            freq[a]-=1
            if freq[a]==0:
                del freq[a]
            for i in range(1,groupSize):
                if a+i not in freq :
                    return False
                else:
                    freq[a+i]-=1
                if freq[a+i]==0:
                    del freq[a+i]
        
        return True
        

        


        