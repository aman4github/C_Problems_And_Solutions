#include<stdio.h>
int main()  
{  
    int a[100], i, n, pos = 0, neg = 0, even = 0, odd = 0, zero = 0;  
  	printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter %d integer numbers\n", n);  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &a[i]);  
        if(a[i] == 0)  
        {  
            zero++;  
        }  
        else if(a[i] > 0)  
        {
        	pos++; 
		}    
        else  
        {
        	neg++;  
		}   
  
        if(a[i] == 0)  
        {  
  		//
        }  
        else if(a[i] % 2 == 0)  
            even++;  
        else  
            odd++;  
    }  
  
    printf("\nPositive: %d\n", pos);  
    
    printf("Negative: %d\n", neg);  
    
    printf("Even: %d\n", even);  
    
    printf("Odd: %d\n", odd);  
    
    printf("Zero: %d\n", zero);  
  
    return 0;  
}
