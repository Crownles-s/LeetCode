class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums3=[]
        nums3=nums1+nums2
        nums3.sort()
        x=nums3.sort()
        size=len(nums3)
        if (size%2==0):
            median=(float)(nums3[(size/2)-1]+nums3[size/2])/2
        else:
            median=nums3[size//2]
        return media
