class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        n=len(people)
        l=0
        r=n-1
        boatcnt=0
        while l<=r:
            w=people[l]+people[r]
            if w>limit:
                r-=1
                boatcnt+=1
            else:
                l+=1
                r-=1
                boatcnt+=1
        
        return boatcnt
        