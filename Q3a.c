#include<stdio.h>  
int main()  
{  
int num, rem, sum = 0, i;  
printf("Enter a number\n");  
scanf("%d", &num);      
for(i = 1; i < num; i++)  
                     {  
                              rem = num % i;  
                             if (rem == 0)  
                                        {  
                                               sum = sum + i;  
                                         }  
                        }  
if (sum == num)  
       {
                      printf(" %d is a Perfect Number",num ); 
        }
    else if(sum>num)
    {
        printf("\n %d is a abundent number ",num );
     }   
      else  
      {
                      printf("\n %d is  a deficient Number",num );  
       }
return 0;
}
