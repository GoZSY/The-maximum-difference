/***********************************************************************************************
//首先找到最大值以及最大值所在的位置pos：
//1.如果pos=0，那么最大差值肯定是A[[0]-A[n-1]，因为左部分最大值必然是A[0]，
//右部分必然要包含A[n-1]，那么右部分最大值只会>=A[n-1]
//2.如果pos=n-1，那么最大差值肯定是A[n-1]-A[0]，道理和1一样
//3.如果pos是在中间位置，那么就是取(A[pos] - A[0]) 和(A[pos] - A[n-1])中最大的一个。 
************************************************************************************************/
class MaxGap {
public:
    int findMaxGap(vector<int> A, int n) 
    {
        // write code here
        if(n < 1)
            return 0;
      int max = A[0];
      for (int i = 1; i < n; ++i)
      {
          if(A[i]>max)
              max = A[i];
      }
        int min = A[n-1]>A[0]?A[0]:A[n-1];
       return max - min;
    }
};
