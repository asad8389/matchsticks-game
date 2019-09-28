#include<stdio.h>
#include<conio.h>
int main()
{
int cmp=0,p,n;

printf("Total sticks=21\nyou can pick 4 sticks at a time\n");


for(n=21;n>1;)
{
    printf("\nits your turn, pick sticks\n");
    scanf("%d",&p);

      if(p<1 && p>4)
      {
            printf("\nwrong pick, try again\n");
      }
      else
      {
            cmp=5-p;
            printf("i pick %d sticks",cmp);
            n=n-(cmp+p);
            printf("\nremaining sticks=%d\n",n);
            if(n==1)
            printf("\nyou loose");
      }
}
getch();
return 0;
}


