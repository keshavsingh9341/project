#include<stdio.h>
int main()
{int a,b,c;
  printf("welcome to calculator\n");
   {
    printf(" choose any option\n1add\n2sub\n3mul\n4div");
    scanf("%d",&c);
   }

  {
    printf("enter any two number");
    scanf("%d%d",&a,&b);
  }

    while(1)
   {
      switch(c)
     {
        case 1:
        {
            printf("sum is %d",a+b);
        }
        break;
        case 2:
        {
            printf("sub is %d",a-b);
            }
        break;
        case 3:
        {
            printf("mul is %d",a*b);

        }
        break;
        case 4:
        {
            printf(" div is %d",a/b);
        }
        break;
        
        printf("calculator program end");
            
        
        default:
        {
            printf ("enter valid no");`
        }
     
      
       }
      {
         exit(0);
         }

      
    } 
  
}

