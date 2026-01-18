class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if (x==0):
            return 0
        res=x
        temp=0
        while (res*res>x):
            temp=res
            res=(res+(x/res))//2
        return res
