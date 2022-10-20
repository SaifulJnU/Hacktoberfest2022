#include<stdio.h>
void Input(int row,int column,int arr[row][column]);
void Output(int row,int column,int arr[row][column]);
void Add(int row,int column,int arr[row][column],int b[row][column],int c[row][column]);
void subtract(int row,int column,int arr[row][column],int b[row][column],int c[row][column]);
void multipliy(int row,int column,int arr[row][column],int b[row][column],int c[row][column]);
void transpose(int row,int column,int arr[row][column]);
void utriangle(int row,int column,int arr[row][column]);

int main()
{
   int a[34][34],a1[34][34],a3[34][34],r,c;
   printf(" for first matrix:\n");
   printf("enter the row:");
   scanf("%d",&r);

   printf("enter the column:");
   scanf("%d",&c);
   Input(r,c,a);
   Output(r,c,a);
   printf("\n");
   printf("transpose of matrix\n");
   transpose(r,c,a);
   printf("\n");
   printf("checking for upper or lower triangle\n");
   utriangle(r,c,a);
   printf("\n");
   
   printf("for second matrix:\n");
   printf("enter the row:");
   scanf("%d",&r);

   printf("enter the column:");
   scanf("%d",&c);
   Input(r,c,a1);
   Output(r,c,a1);
   
   printf("sum of matrix:\n");
   Add(r,c,a,a1,a3);
   printf("\n");
   
   printf("subtraction of two matrix\n");
   subtract(r,c,a,a1,a3);
   printf("\n");
   
   printf("multiplication of two matrix\n");
   multipliy(r,c,a,a1,a3);
   printf("\n");
   
   
}

void Input(int row,int column,int arr[row][column])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("enter the element:");
            scanf("%d",&arr[i][j]);
        }
    }
}

void Output(int row,int column,int arr[row][column])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void Add(int row,int column,int arr[row][column],int b[row][column],int c[row][column])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
           c[i][j]=arr[i][j]+b[i][j];
        }
        
    }
    
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}

void subtract(int row,int column,int arr[row][column],int b[row][column],int c[row][column])
{
     int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
           c[i][j]=arr[i][j]-b[i][j];
        }
        
    }
    
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",c[i][j]);
        }
       printf("\n");
    }
}

void multipliy(int row,int column,int arr[row][column],int b[row][column],int c[row][column])
{
    int i,j,multi[10][10];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            multi[i][j]=0;
           for(int k=0;k<column;k++)
           {
               multi[i][j]=multi[i][j]+arr[i][k]*b[k][j];
               
           }
        }
        
    }
    
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
}

void transpose(int row,int column,int arr[row][column])
{
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}


void utriangle(int row,int column,int arr[row][column])
{
    int check=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(column<row && arr[row][column]!=0)
            {
                check=0;
            }
            
        }
        
    }
    
    if(check==1)
    {
        printf("given matrix is upper triangle:");
    }
    else
    {
        printf("given matrix is not upper triangle:");
    }

}
