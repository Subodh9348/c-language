// #include <stdio.h>
// int main(){
//    int b,p;long i=1;
//    printf("enter the base");
//    scanf("%d",&b);
//    printf("enter the power");
//    scanf("%d",&p);
//    while (p>=1)
//    {
//       i=i*b;
//       p--;
//    }
//    printf("power:%ld",i);
// return 0;
// }
// enter the base5
// enter the power2
// power:25

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         printf("%d ",c);
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// #include<stdio.h>
// int main(){
//    int n,fact=1,i;
//    printf("enter the no");
//    scanf("%d",&n);
//    for (i=1;i<=n;i++)
//    {
//       fact=fact*i;
//    }
//    printf("factorial:%d",fact);
//    return 0;
// }
// enter the no5
// factorial:120

//  #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         if(r==nr/2+1||c==nc/2+1||c==1&& r<=nr/2+1||c==nc&&r>=nr/2+1||r==nr&&c<=nc/2+1||r==1 && c>nc/2){
//         printf("* ");
//       }else{
//         printf("  ");
//       }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
// *   * * * 
// *   *
// * * * * *
//     *   *
// * * *   *

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         if(r+c==nc+1||r+c>nc+1){
//         printf("1 ");
//       }else{
//         printf("0 ");
//       }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
// 0 0 0 0 1 
// 0 0 0 1 1
// 0 0 1 1 1
// 0 1 1 1 1
// 1 1 1 1 1

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         if(r==1||c==1||r==nr||c==nc){
//         printf("* ");
//       }else{
//         printf("  ");
//       }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
// * * * * * 
// *       *
// *       *
// *       *
// * * * * *
// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=nc-1;c>=r;c--)
//       {
//         printf("0 ");
//       }
//       for (int k=1;k<=r;k++)
//       {
//         printf("1 ");
//       }
      
//       printf("\n");
//    }
   
//    return 0;
// }
// 0 0 0 0 1 
// 0 0 0 1 1
// 0 0 1 1 1
// 0 1 1 1 1
// 1 1 1 1 1

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         if(r==c||r+c==nc+1){
//             printf("* ");
//         }else{
//             printf("0 ");
//         }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
// * 0 0 0 * 
// 0 * 0 * 0
// 0 0 * 0 0
// 0 * 0 * 0
// * 0 0 0 *
// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         if(r==nr/2+1||c==nc/2+1){
//             printf("* ");
//         }else{
//             printf("  ");
//         }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
//     *     
//     *
// * * * * *
//     *
//     *

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=nc;c++)
//       {
//         if(r/2+1){
//             printf("* ");
//         }else{
//             printf("  ");
//         }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=r;c++)
//       {
//         if(nr==r||r==c||c==1){
//             printf("%2d",c);
//         }else{
//             printf("  ");
//         }
//       }
//       printf("\n");
//    }
   
//    return 0;
// }
//  1
//  1 2
//  1   3
//  1     4
//  1 2 3 4 5


// #include<stdio.h>
// int main(){
//    int r,c,nr,nc,k=1;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=r;c++)
//       {
//             printf("%3d",k);
//             k++;
//       }
//       printf("\n");
//    }
   
//    return 0;
// }

//   1
//   2  3
//   4  5  6
//   7  8  9 10
//  11 12 13 14 15

// #include<stdio.h>
// int main(){
//    int r,c,nr,nc,k=1;
//    printf("enter the row");
//    scanf("%d",&nr);
//    printf("enter the column");
//    scanf("%d",&nc);
//    for (r=1;r<=nr;r++)
//    {
//       for (c=1;c<=r;c++)
//       {
//             printf("%3d",k+(nr-c));
         
//       }
//       printf("\n");
//          k++;
//    }
   
//    return 0;
// }
//   5
//   6  5
//   7  6  5
//   8  7  6  5
//   9  8  7  6  5