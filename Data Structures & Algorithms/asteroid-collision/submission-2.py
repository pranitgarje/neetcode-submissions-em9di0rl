class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        s=[]
        n=len(asteroids)
        alive=True
        for i in range(n):
            alive=True
            while alive and s and asteroids[i] < 0 and s[-1] > 0 :
                if abs(asteroids[i]) > s[-1] : 
                    s.pop()
                    
                elif abs(asteroids[i]) < s[-1] :
                    alive=False
                    
                else :
                    s.pop()
                    alive= False
                    

            if(alive): s.append(asteroids[i])

        return s
        


        

        