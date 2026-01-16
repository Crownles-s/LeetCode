class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res=[]
        for i in nums:
            x=i*i
            res.append(x)
            x=0
        res.sort()
        return res
