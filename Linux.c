#include<stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void Solution(int* nums, int numsSize, int target, int* returnSize)
{
    for(int i = 0;i < numsSize - 1;i++)
    {
        for(int j = i + 1;j < numsSize;j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("[%d,%d]",i,j);
            }
        }
    }
}

//��������
int* Array()
{
    int nums[];
}

int main()
{
    int input1,input2,target;
    printf("������Ŀ����");
    scanf("%d",&target);
}