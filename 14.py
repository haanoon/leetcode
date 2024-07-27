class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        count = int(0)
        first = strs[0]
        last = strs[-1]
        for i in range(min(len(first),len(last))):
            if first[i] != last[i]:
                if count == 0:
                    return ''
                return first[0:count]
            count+=1
        if count == 0:
            return ''
        return first[0:count]