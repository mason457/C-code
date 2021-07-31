#include <stdio.h>
#include <stdlib.h>

main()
{
 float   pi = 3.1416;
 float   r = 10.0;
 float   area = 0.0;
        printf("r =");
        scanf("%f", &r); 
	    area = pi * r * r;
		printf("area = %10.2f \n", area);
		system("pause");
}
