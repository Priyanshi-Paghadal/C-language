// SWITCH CASE //
// #include <stdio.h>

// int main() {
//     // Write C code here
//     int a,b,choice,ans;
//     printf("Enter a & b value\n");
//     scanf("%d %d",&a,&b);
//     printf("1 for Addition\n2 for substraction\n3 for Multiplication\n4 for divide");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//             ans = a+b;
//             printf("Addition of a + b = %d",ans);
//             break;
//         case 2:
//             ans = a-b;
//             printf("Substraction of a - b = %d",ans);
//             break;
//         case 3:
//             ans = a*b;
//             printf("Multiplication of a * b = %d",ans);
//             break;
//         case 4:
//             ans = a/b;
//             printf("Dividion of a / b = %d",ans);
//             break;
//         default:
//             printf("Invalid Choice");
//             break;
//     }

//     return 0;
// }

// LOOP //

// #include <stdio.h>
// 10 100 5 20 90 15        60 50 45
// int main()
// {
//     int a = 10, b = 100, c = 5;
//     while (a <= 60)
//     {
//         printf("%d %d %d ", a,b,c);
//         a=a+10;
//         b=b-10;
//         c=c+10;
//     }
//     return 0;
// }

// IF ELSE

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter Value : \n");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("Even Number");
//     }
//     else{
//         printf("Odd Number");
//     }
//     return 0;
// }

// NESTED IF ELSE

// #include <stdio.h>
// int main()
// {
//     int eng, guj, stat, total, avg;
//     printf("Enter english gujarati stat marks : \n");
//     scanf("%d %d %d", &eng, &guj, &stat);
//     total = eng + guj + stat;
//     avg = total / 3;
//     printf("Total marks = %d\n", total);
//     printf("Percentage is = %d\n", avg);
//     if (avg >= 33)
//     {
//         if (avg >= 50)
//         {
//             if (avg >= 75)
//             {
//                 printf("A Grade");
//             }
//             else
//             {
//                 printf("B Grade");
//             }
//         }
//         else
//         {
//             printf("C grade");
//         }
//     }
//     else
//     {
//         printf("Fail");
//     }
//     return 0;
// }

// PATTERN

// #include <stdio.h>
/* 5 4 3 2 1
     4 3 2 1
       3 2 1
         2 1
           1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= i - 1; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 6 - i; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 5 4 3 2 1
     5 4 3 2
       5 4 3
         5 4
           5
*/
// int main()
// {
//     for(int i=1; i<=5; i++){
//         for(int k=1; k<=i-1; k++){
//             printf("  ");
//         }
//         for(int j=5; j>=i; j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1 2 3 4 5
     2 3 4 5
       3 4 5
         4 5
           5
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= i - 1; k++)
//         {
//             printf("  ");
//         }
//         for (int j = i; j <= 5; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1 2 3 4 5
     1 2 3 4
       1 2 3
         1 2
           1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= i - 1; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <= 6 - i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/*      5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5 - i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 6 - i; j <= 5; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/*      1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
// int main()
// {
//     for(int i=1; i<=5; i++){
//         for(int k=1; k<=5-i; k++){
//             printf("  ");
//         }
//         for(int j=1; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/*      5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5 - i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 5; j >= 6 - i; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/*      1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5 - i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 5 4 3 2 1
   4 3 2 1
   3 2 1
   2 1
   1
*/
// int main()
// {
//     for(int i=1; i<=5; i++){
//         for(int j=6-i; j>=1; j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 5 4 3 2 1
   5 4 3 2
   5 4 3
   5 4
   5
*/
// int main()
// {
//     for(int i=1; i<=5; i++){
//         for(int j=5; j>=i; j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1 2 3 4 5
   2 3 4 5
   3 4 5
   4 5
   5
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 6 - i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1
   2 1
   3 2 1
   4 3 2 1
   5 4 3 2 1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// void tri();
// int main()
// {
//     int n;
//     printf("How many you want repeat this process");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         tri();
//     }
//     return 0;
// }
// void tri()
// {
//     int l, b;
//     printf("Enter l & b value");
//     scanf("%d %d", &l, &b);
//     int ans = l * b;
//     printf("Area of Triangle is %d\n", ans);
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     printf("Enter Number you want to make table");
//     scanf("%d", &i);
//     for (j = 1; j <= 10; j++)
//     {
//         int ans = i*j;
//         printf("%d*%d=%d\n",i,j,ans);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i, no, sum = 0;
//     printf("Enter any Number for sum : \n");
//     scanf("%d", &no);
//     while (no > 0)
//     {
//         i = no % 10;
//         sum = sum + i;
//         no = no / 10;
//     }
//     printf("Sum of digit = %d ", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int size, sum = 0;
//     printf("Enter size of array : ");
//     scanf("%d", &size);
//     int a[size];
//     printf("Enter array element\n");
//     for (int i = 1; i <= size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 1; i <= size; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("Sum of array %d ", sum);
//     return 0;
// }

// #include <stdio.h>
/*          *
          1 2
        * * *
      1 2 3 4
    * * * * *
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5 - i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 == 1)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("%d ", j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int m, n, a[10][10];
//     printf("How many Row and Column you want : \n");
//     scanf("%d %d", &m, &n);
//     printf("Enter 2-d array element : \n");
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("2-d Array Element : \n");
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// 1 8 15 22 36 43 90 100 110 120 130 140
// int main()
// {
//     int b = 90, a = 1;
//     while (b <= 140)
//     {
//         while (a <= 43)
//         {
//             printf("%d ", a);
//             a = a + 7;
//         }
//         printf("%d ", b);
//         b = b + 10;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1, j = 1, ans;
//     while (i <= 10)
//     {
//         j = 1;
//         while (j <= 10)
//         {
//             ans = i * j;
//             printf("%d*%d=%d\n", i, j, ans);
//             j++;
//         }
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int sum = 0, no, i, t;
//     printf("Enter Your Number : \n");
//     scanf("%d", &no);
//     t = no;
//     while (no > 0)
//     {
//         i = no % 10;
//         sum = sum + (i * i * i);
//         no = no / 10;
//     }
//     if (sum == t)
//     {
//         printf("The number is a armstrong number.\n");
//     }
//     else
//     {
//         printf("The number is not a armstrong number");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int a[10], pos, size, value;
//   printf("Enter array size :\n");
//   scanf("%d", &size);
//   for (int i = 0; i < size; i++)
//   {
//     scanf("%d", &a[i]);
//   }
//   printf("Which value you want to add..\n");
//   scanf("%d", &value);
//   printf("Which position..\n");
//   scanf("%d", &pos);
//   for (int i = size - 1; i >= pos; i--)
//   {
//     a[i + 1] = a[i];
//   }
//   a[pos] = value;
//   size++;
//   for (int i = 0; i < size; i++)
//   {
//     printf("%d ", a[i]);
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int a[10], pos, n, value, i;
  printf("Enter array size:\n");
  scanf("%d", &n);
  printf("Enter array element");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter value which you want to delete");
  scanf("%d", &value);
  printf("Enter position");
  scanf("%d", &pos);
  a[pos] = a[i - 1];
  n--;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}