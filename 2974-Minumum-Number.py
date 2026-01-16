class Solution(object):
    def numberGame(self, a):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        a.sort()
        res=[]
        for i in range(0,len(a),2):
            res=res+[a[i+1],a[i]]
        return res
