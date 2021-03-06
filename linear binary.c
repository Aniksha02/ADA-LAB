#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;

void delay()
{
    for(int i=0;i<10000;i++)
    {
        for(int j=0;j<500;j++)
        {
            
        }
    }
}

int binarysearch(int arr[],int low,int high,int key)
{   delay();
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
            
        }
        
        else if(arr[mid]>key)
        {
            binarysearch(arr,low,mid-1,key);
        }
        else{
            binarysearch(arr,mid+1,high,key);
        }
    }
    else{return -1;}
}

int linearsearch(int arr[],int key,int n)
{   delay();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
   int arr[6]={1,3,5,6,7,8};
   
   start=clock();
   int idx=binarysearch(arr,0,5,7);
   end=clock();
   
   
   printf("%d\n",idx);
   printf("For Binarysearch:%f\n",((double)(end-start)/CLOCKS_PER_SEC));
   
   
   start=clock();
    idx=linearsearch(arr,7,6);
   end=clock();
   
   printf("%d\n",idx);
   
   printf("For linearsearch:%f\n",((double)(end-start)/CLOCKS_PER_SEC));
   
   

    return 0;
}
