class Solution(object):
    def maxProduct(self, n):
        """
        :type n: int
        :rtype: int
        """
        m = []
        num = str(n)
        for i in num:
            m.append(int(i))
        m.sort()
        return m[-1]*m[-2]