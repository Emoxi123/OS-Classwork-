#include <stdio.h>

int main()
{
    int i, j, end, isPrime; 

    int count = 0;
  
    scanf("%d", &end);

   

    for(i=2; i<=end; i++)
    {

        isPrime = 1; 

       
        for(j=2; j<=i/2; j++)
        {
            
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        
        if(isPrime==1)
        {
        
        	count++; 
           
        }
    }
	printf("%d", count);
    return 0;
}
