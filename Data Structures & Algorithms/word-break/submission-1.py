class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        dp = [False] * (len(s) +1) #init an arr of len s as them all as false
        dp[len(s)] = True #make the last item true so that if it ever reaches that then its true

        for i in range (len(s) - 1, -1 ,-1):
            for w in wordDict:
                if(i + len(w))<= len(s) and s[i: i + len(w)] == w:
                    dp[i] = dp[i + len(w)]
                if dp[i]:
                    break

        return dp[0]
