#include<stdio.h>    
int main()    
{         
   int arr[]={7,5,3,6,9};     
   int temp=0;
   int length=sizeof(arr)/sizeof(arr[0]);
   for (int i=0;i<length;i++) 
   {     
      printf("%d ",arr[i]);     
   }          
   for (int i=0;i<length;i++) 
   {     
      for (int j=i+1;j<length;j++) 
      {     
         if(arr[i]<arr[j]) 
         {    
            temp = arr[i];    
            arr[i] = arr[j];    
            arr[j] = temp;    
         }     
      }     
   }    
   printf("\n");  
   printf("Elements of array in descending order:");    
   for (int i=0;i<length;i++) 
   {     
      printf("%d ",arr[i]);
   }    
   return 0;    
}
