class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        n=len(bills)
        five=0
        ten=0
        twenty=0
        for i in range(n):
            if bills[i]==5:
                five+=1
            elif bills[i]==10:
                if five < 1 : return False
                five-=1
                ten+=1
            else :
                if five>=3 : five-=3
                elif ten>=1 and five >=1 :
                    ten-=1
                    five-=1
                else : return False
                twenty+=1
          
        
        return True
        