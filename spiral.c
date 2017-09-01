# include <stdio.h>
# include <stdlib.h>

void main()
{
  int **arr, n, i, j, m, l;
  
  printf("\nEnter n..  ");
  scanf("%d", &n);
  
  arr = (int **)malloc(n * sizeof(int*));
  
  for(i=0; i<n; i++)
    arr[i] = (int *)malloc(n * sizeof(int));
    
  printf("\nEnter the array elements..\n");
  
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      scanf("%d", &arr[i][j]);
      
  printf("\n\nORIGINAL MATRIX\n\n");
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      printf("%d ", arr[i][j]);
      
    printf("\n");
  }
  
  printf("\n\nSPIRAL MATRIX\n\n");
 
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
