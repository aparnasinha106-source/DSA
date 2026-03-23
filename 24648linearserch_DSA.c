// Linear search using dynamic memory
 
 
 #include <stdio.h>
 #include <stdlib.h>
 
int main()
{
int n,key;

printf("Enter the number of elements:");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

if (arr==NULL)
{
   printf("Memory allocation not found\n");
   return 1;
  }
  //Input elements
   for (int i=0; i < n; i++)
   {
      printf("Enter %d element:",i + 1);
      scanf(" %d",&arr[i]);
  }
  //Input key
  printf("Enter key element to search:");
   scanf("%d",&key);
   //Linear search
   int found =0;
   for (int i=0; i < n; i++)
   {
   if(arr[i]==key)
   {
      printf("Element %d found at position %d\n",key, i+1);
               found=1;
               break;
      }
  }
    if (!found)
   { 
      printf("Element %d not found in the array\n",key);
      }
            free(arr);
            return 0;
  }
  

   


