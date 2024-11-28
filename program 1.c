#include <stdio.h>
int main(){
   int n1,n2;
   printf("enter n1 value");
   scanf("%d",&n1);
   printf("enter n2 value");
   scanf("%d",&n2);
   if(n1>n2){
      
      while(n1>=n2)
      {
         printf("%d",n1);
         if(n1!=n2)
   printf(",");
         n1--;
      }
   }
   else{
   while (n1<=n2)
   {
   printf("%d",n1);
   if(n1!=n2)
   printf(",");
   n1++; 
   }
   }
return 0;
}


