#include <stdio.h>
int number(int x)
{
	rand(time(NULL));
	return rand()%x;
}
int main()
{
    char arr[10] = {"123456789"};
    
    for (int i = 0; i < 9; i++)
    {
    	if(((arr[0]&&arr[1]&&arr2)))

        int n1;
        printf("| %c | %c | %c |\n", arr[0], arr[1], arr[2]);
        printf("-------------\n");
        printf("| %c | %c | %c |\n", arr[3], arr[4], arr[5]);
        printf("-------------\n");
        printf("| %c | %c | %c |\n", arr[6], arr[7], arr[8]);
        printf("-------------\n");
		
		if(i==0||i==2||i==4||i==6||i==8)
		{
        for (int j = 0; j == 0;)
        {
        
        	 printf("\n\n now its your turn..................\n\n",n1);
            printf("enter your no :");
            scanf("%d", &n1);
            printf("you choose number %d\n\n ..................\n",n1);
            if (arr[n1 - 1] != 'o'&&arr[n1 - 1] != 'x')
            {
                arr[n1 - 1] = 'o';
                j++;
                break;
            }
            printf("\nplease choose no other than already choosen please \t\n");
        }
    	}
        else
        {
        for (int j = 0; j == 0;)
        {
        	 printf("\n\n now its computer turn..................\n",n1);
           n1=number(9);
            if (arr[n1 - 1] != 'o'&&arr[n1 - 1] != 'x')
            {
                arr[n1 - 1] = 'x';
                 printf("computer choose number %d\n\n ..................\n\n",n1);
                j++;
                break;
            }
        }
    	}
           
    }
    return 0;
}
