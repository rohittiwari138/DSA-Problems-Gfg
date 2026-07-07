class Solution:
    def concatenateArrays(self, arr1, arr2, axis):
        import numpy as np
        return np.concatenate((arr1, arr2), axis=axis)