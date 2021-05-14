# Kadane's Algorithm

This algorithm is used to get the largest contiguous subarray sum.


#### Algorithm

* initialize rsum = INT_MIN (resultant sum with which we compare all the subarray sum and replace it will the maximum sum)
* initialise csum = 0 (current subarray sum)
* loop through the array (i=0 to n-1)
        - csum = csum + array[i]
        - if rsum < csum then rsum = csum
        - if csum < 0 then csum = 0


