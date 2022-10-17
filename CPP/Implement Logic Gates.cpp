#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int i,j,n,a[50],b[50],s[50],ch;
int loop1;
while(1){
printf("\n*************************************\n");
printf("\n\t1. INSERTING RECORDS.\n");
printf("\t2. IMPLEMENT GATE < AND >.\n");
printf("\t3. IMPLEMENT GATE < OR >.\n");
printf("\t4. IMPLEMENT GATE < NOT >.\n");
printf("\t5. IMPLEMENT GATE < NAND >.\n");
printf("\t6. IMPLEMENT GATE < NOR >.\n");
printf("\t7. IMPLEMENT GATE < XOR >.\n");
printf("\t8. EXIT FROM THE PROGRAM.\n");
printf("\n*************************************\n");
printf("\n\nPLEASE ENTER YOUR CHOICE:");
scanf("%d",&ch);
switch(ch)
 {
case 1:
            printf("Enter N value:");
            scanf("%d",&n);
            printf("\n value of n=%d",n);
            for(i=1;i<=n;i++)
            {
            printf("\nENTER VALUE OF A[%d]=",i);
            scanf("%d",&a[i]);
            }
            for(i=1;i<=n;i++)
            {
            printf("\nENTER VALUE OF B[%d]=",i);
            scanf("%d",&b[i]);
            }
            for(i=1;i<=n;i++)
            {
            if(a[i]>1 || b[i]>1)
            {
            printf("\n ENTER DATA BETWEEN 0 AND 1");
            return 1;
            }
            }
            
            printf("\n VALUE OF A \t VALUE OF B\n");
            for(i=1;i<=n;i++)
            printf("\n\t%d\t\t%d",a[i],b[i]);
            return 1;
            break;
case 2:
            for(i=1;i<=n;i++)
            {
            if(a[i]==1 && b[i]==1)
            s[i]=1;
            else
            s[i]=0;
            }
            printf("\n\tA\tB\tAND\n");
            for(i=1;i<=n;i++)
            printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);
            return 1;
            break;
case 3:
            for(i=1;i<=n;i++)
            {
            if(a[i]==0 && b[i]==0)
            s[i]=0;
            else
            s[i]=1;
            }
            printf("\n\tA\tB\tOR\n");
            for(i=1;i<=n;i++)
            printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);
            return 1;
            break;
case 4:
            printf("\n BEFORE OPERATING THE 'NOT' VALUE OF A IS :\n");
            printf("\tA\n");
            for(i=1;i<=n;i++)
            printf("\n\t%d",a[i]);
            for(i=1;i<=n;i++)
            {
            if(a[i]==1)
            s[i]=0;
            else
            s[i]=1;
            }
            printf("\n AFTER OPERATING THE NOT VALUE OF A IS :\n");
            printf("\n\tNOT A\n");
            for(i=1;i<=n;i++)
            printf("\n\t%d",s[i]);
            return 1;
            break;
case 5:
            for(i=1;i<=n;i++)
            {
            if(a[i]==1 && b[i]==1)
            s[i]=1;
            else
            s[i]=0;
            }
            printf("\nBEFORE OPERATING THE 'NOT AND'VALUE OF \n");
            printf("\n\tA\tB\tS\n");
            
            for(i=1;i<=n;i++)
            printf("\n%d\t%d\t%d",a[i],b[i],s[i]);
            for(i=1;i<=n;i++)
            {
            if(s[i]==1)
            s[i]=0;
            else
            s[i]=1;
            }
            printf("\n AFTER OPERATING THE 'NOT AND' VALUE OF \n");
            
            printf("\n\tA\tB\tNAND\n");
            
            for(i=1;i<=n;i++)
            printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);
            return 1;
            break;
 case 6:
            for(i=1;i<=n;i++)
            if(a[i]==1 || b[i]==1)
            s[i]=1;
            else
            s[i]=0;        
            printf("\nBEFORE OPERATING THE 'NOT OR'VALUE OF \n");
            printf("\n\tA\tB\tS\n");
            
            for(i=1;i<=n;i++)
            printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);
            for(i=1;i<=n;i++)
            {
            if(s[i]==1)
            s[i]=0;
            else
            s[i]=1;
            }
            printf("\n AFTER OPERATING THE 'NOT OR' VALUE OF \n");
            printf("\n\tA\tB\tNOR\n");
            
            for(i=1;i<=n;i++)
            printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);
            return 1;
            break;
case 7:
            printf("\nBEFORE OPERATING THE 'XOR'VALUE OF \n");
            printf("\n\tA\tB\n");
            for(i=1;i<=n;i++)
            printf("\n %d\t %d \t %d",a[i],b[i],s[i]);
            for(i=1;i<=n;i++)
            {
            if((a[i]==0 && b[i]==0) || (a[i]==1 && b[i]==1))
            s[i]=0;
            else
            s[i]=1;
            }
            printf("\n AFTER OPERATING THE 'XOR' VALUE OF \n");
            printf("\n\tA\tB\tXOR\n");
            for(i=1;i<=n;i++){
            printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);}
            return 1;
            break;            
case 8:
            exit(0);
            }
            getch();
 return 0;
 }}
