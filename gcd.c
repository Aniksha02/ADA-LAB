#include <stdio.h>
#include<time.h>

int gcd(int m,int n){
    if(n==0){ 
        return m;
    }
    
    int d=m%n;
    return gcd(n,d);
}


int main()
{
    clock_t start,end;
    int m,n;
    printf("Enter two numbers\n");
    scanf("%d %d",&m,&n);
    start=clock();
    int result=gcd(m,n);
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000000;j++){
            
        }
    }
    end=clock();
    printf("\ntime taken %f ", difftime(end,start)/CLOCKS_PER_SEC);
    printf("\nGCD of %d and %d is : %d\n",m,n,result);
}
