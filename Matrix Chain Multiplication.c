#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void parenth(int **s, int i, int j);

void matrixChain(int *p, int n);

int main(void)
{
	int num, i;
	scanf("%d", &num);

	int *p= (int*)malloc(num*sizeof(int));
	for(i=0; i<=num; i++)
		scanf("%d", &p[i]);

	matrixChain(p, num);
	return 0;
}

void matrixChain(int *p, int n)
{
	int i, j, k, l;
	int **m = (int**)malloc(n+1*sizeof(int*));
	int **s = (int**)malloc(n+1*sizeof(int*));

	for(i=0; i<n; i++)
	{
		m[i] = (int*)malloc(n+1*sizeof(int));
		s[i] = (int*)malloc(n+1*sizeof(int));
	}

	for(i=1; i<=n; i++)
		m[i][i] = 0;

	for(l=2; l<=n; l++)
	{
		for(i=1; i<=n-l+1; i++)
		{
			j=i+l-1;
			m[i][j] = INT_MAX;

			for(k=i; k<=j-1; k++)
			{
				int q = m[i][k] + m[k+1][j] + (p[i-1]*p[k]*p[j]);
				if(q<m[i][j])
				{
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}

	printf("\n");
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	printf("\n");
	
	for(i=1; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
			printf("%d ", s[i][j]);
		printf("\n");
	}

	parenth(s, 1, n);
	printf("\n\n");
	printf("%d\n", m[1][n]);
}

void parenth(int **s, int i, int j)
{
	if(i==j)
		printf("A%d", i);
	else
	{
		printf("(");
		parenth(s, i, s[i][j]);
		parenth(s, s[i][j]+1, j);
		printf(")");
	}
}
