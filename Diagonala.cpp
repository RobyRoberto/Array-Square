#include<stdio.h>

int main()

{
    int i, j, sum=0, n, sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, sum6=0, sum7=0, sum8=0, sum9=0;
 
   printf("The number of the square array lines :");
  
   scanf("%d",&n);
   int a[n][n];

   for(i=0;i<n;i++) //Reading the array
 
  {
        for(j=0;j<n;j++)

        scanf("%d",&a[i][j]);

  }
   for(i=0;i<n;i++) //Showing
  
{
        for(j=0;j<n;j++)

            printf("%d ",a[i][j]);

        printf("\n");
}
	for(i=0;i<n;i++)

        {
            for(j=0;j<n;j++)
		
            {   
                        if(i==j)
			   sum=sum+a[i][j];
			if(i+j==n-1)
			   sum1=sum1+a[i][j];			
			if(i>j)
			   sum2=sum2+a[i][j];
			if(i+j>n-1)
			   sum3=sum3+a[i][j];
			if(i+j<n-1)
			   sum4=sum4+a[i][j];
			if(i<j)
			   sum5=sum5+a[i][j];
			if(i>j&&i+j>n-1)
				sum6=sum6+a[i][j];
			if(j>i&&i+j<n-1)
				sum7=sum7+a[i][j];
			if(i>j&&i+j<n-1)
				sum8=sum8+a[i][j];
			if(j>i&&i+j>n-1)
				sum9=sum9+a[i][j];
}
}
        printf("\n The sum of the elements on the main diagonal: %d",sum);
        printf("\n The sum of the elements on the secondary diagonal: %d",sum1);
	printf("\n The sum of the elements under the main diagonal: %d",sum2);
	printf("\n The sum of the elements under the secondary diagonal: %d",sum3);
	printf("\n The sum of the elements above the main diagonal: %d",sum4);
	printf("\n The sum of the elements above the secondary diagonal: %d",sum5);
	printf("\n The sum of the elements of the South zone: %d",sum6);
	printf("\n The sum of the elements of the North zone: %d",sum7);
	printf("\n The sum of the elements of the West zone: %d",sum8);
	printf("\n The sum of the elements of the East zone: %d",sum9);
return 0;}