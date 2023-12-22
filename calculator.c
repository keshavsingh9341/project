#include<stdio.h>
main()
{
    int a;
    while (1)
    {
        
        printf("------Welcome to xcalculator----\nChoose the option\n1.Add\n2.Subtract\n3.Exit");
        scanf("%d",&a);
        switch (a)
        {
            int x,y;
        case 1:

            printf("Enter two no.\n");
            scanf("%d %d",&x,&y);
            printf("%d",x+y);
            break;
        case 2:
            printf("Enter two no.\n");
            scanf("%d %d",&x,&y);
            printf("%d",x-y);
            break;
        case 3:
            exit(0);
            default:
            printf("Enter valid no.");
            break;
        }
    }
    


}