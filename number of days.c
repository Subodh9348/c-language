#include <stdio.h>
int main(){
 int month=0;
 printf("enter a value for the month");
 scanf("%d",&month);
 switch (month)
 {
 case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    printf("month is 31 days");
    break;
 case 2:
 printf("month is 28 0r 29 days");
 
    break;
    case 4:case 6:case 9: case 11:
    printf("month is 30 days");
    break;
    default:
    printf("invalid month");
 }
 
  return 0;
}



