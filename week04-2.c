//week04-2.c �O���Ѫ�LeetCode�D���D
//Leetcode 2529
int maximumCount(int* nums, int numsSize) {

    int pos =0,neg =0;//�j��e�����O0
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0) pos++;//����
        if(nums[i]<0) neg++;//�t��
    }
    if(pos>neg) return pos;
    else return neg;

}
