#include <stdio.h>
#include <time.h>


void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from  %c to %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from  %c to %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
 
int main()
{
    int n;
    clock_t start,end;
    printf("Enter a number : ");
    scanf("%d", &n);
    start=clock();
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000000;j++){
            
        }
    }
    towers(n, 'A', 'C', 'B');
    end=clock();
    printf("\ntime taken %f ", difftime(end,start)/CLOCKS_PER_SEC);
    return 0;
}
