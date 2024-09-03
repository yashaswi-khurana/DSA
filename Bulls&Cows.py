class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        x = 0
        arrs = [0]*10
        arrg = [0]*10
        for i in range(len(secret)):
            if secret[i]==guess[i] :
                x+=1
            else:
                arrs[int(secret[i])]+=1
                arrg[int(guess[i])]+=1
        y = 0
        for i in range(len(arrs)):
            if arrs[i] == arrg[i] :
                y+=1
        return f'{x}A{y}B'