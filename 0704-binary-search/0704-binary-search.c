int search(int* nums, int numsSize, int target) {

    int beg=0,last=numsSize-1;
    while(beg<=last)
    {
        int mid=(beg+last)/2;
        if(target==nums[mid])
        {
            return mid;
        }
        else if(target>nums[mid])
        {
            beg=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return -1;

    
}
