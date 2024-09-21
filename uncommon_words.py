"""A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order."""
from collections import defaultdict
from typing import List

class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        list_1 = s1.split()
        list_2 = s2.split()
        
        dic_1 = defaultdict(int)
        dic_2 = defaultdict(int)
        ans = set()

        for i in list_1:
            dic_1[i] += 1
        for i in list_2:
            dic_2[i] += 1
        
        for i in list_1:
            if (i not in list_2 and dic_1[i] == 1):
                ans.add(i)
        for i in list_2:
            if (i not in list_1 and dic_2[i] == 1):
                ans.add(i)

        return list(ans)

#Driver Code
