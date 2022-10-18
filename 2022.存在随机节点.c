void sort(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool containsDuplicate(int* nums, int numsSize)
{
      int i = 0,j = 0;
      for(i = 0; i<numsSize-1;i++)
      {
          for(j = 0;j<numsSize - i - 1;j++)
          {
              if(nums[j]>nums[j+1])
              sort(&nums[j],&nums[j+1]);
          }
      }
         for(j = 0; j<numsSize-1;j++)
         {
             if(nums[j+1] == nums[j])
             {
                return true;
             }
         }
      return false;
}
