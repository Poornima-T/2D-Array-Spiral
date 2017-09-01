# include <stdio.h>
# include <stdlib.h>

void main()
{
  int **arr, n, i, j, m, l;                                                  //variable declarations
  
  printf("\nEnter n..  ");                                                   
  scanf("%d", &n);                                                           //Input Matrix Size
  
  arr = (int **)malloc(n * sizeof(int*));                             //Dynamic Memory Allocation for array of pointers
  
  for(i=0; i<n; i++)
    arr[i] = (int *)malloc(n * sizeof(int));                          // Allocating memory for array of integers
    
  printf("\nEnter the array elements..\n");
  
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      scanf("%d", &arr[i][j]);                                       //Reading n*n array eleements
      
  printf("\n\nORIGINAL MATRIX\n\n");                                 //Printing Original 2D Array
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      printf("%d ", arr[i][j]);
      
    printf("\n");
  }
  
  printf("\n\nSPIRAL MATRIX\n\n");                                  //Printing in Spiral Format
 
  i=0; j=0; m=n; l=0;
  
  while(m>=1)
  {
    for(; j<m; j++)
      printf("%d ", arr[i][j]);
      
    for(i++, j--; i<m; i++)
      printf("%d ", arr[i][j]);
      
    for(i--, j--; j>=l; j--)
      printf("%d ", arr[i][j]);
      
    for(i--, j++; i>l; i--)
      printf("%d ", arr[i][j]);
      
    i++; j++;
    
    m--; l++;
  }
  
}
