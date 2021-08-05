#include <stdio.h>
#include <stdlib.h>
main()
{
      int tem;
      int FF;
      int CC;
      float F;
      float C;
      float T;



	
	printf("Please input (1)FF to CC or (2)CC to FF:");
    scanf("%d", &tem);
    printf("Please input Temperature:\n");
    scanf("%f", &T);
    
	if(tem = 1)
    {
           C = T*9.0/5.0+32.0;
           printf("%f F=%f C\n", T, C);
    } 
    else 
    {
           F = (T-32.0)*5.0/9.0;
           printf("%f C=%f F\n", T, F);
    }
    system("pause");
}
