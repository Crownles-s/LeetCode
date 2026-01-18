class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        store={}
        size=len(nums)
        for i in nums:
            store[i]=store.get(i,0)+1
        for i in store:
            if (store[i]>size/2):
                return i
