// #include <stdio.h>
// int main()
// {
//     int a[10], n, odd = 0, even = 0;
//     printf("Enter array size : \n");
//     scanf("%d", &n);
//     printf("Enter array Element..\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Below is your array record..\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 1)
//         {
//             odd++;
//         }
//         else
//         {
//             even++;
//         }
//     }
//     printf("Odd element = %d\n even element = %d", odd, even);
//     return 0;
// }

// #include <stdio.h>
// void add();
// void sub();
// void mul();
// void div();
// int main()
// {
//     int choice;

//     do
//     {
//         printf("1 for Addition \n 2 for Substraction \n 3 for Multiplication \n 4 for Division\n 0 for exit\n");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             add();
//             break;
//         case 2:
//             sub();
//             break;
//         case 3:
//             mul();
//             break;
//         case 4:
//             div();
//             break;
//         case 0:
//             break;
//         default:
//             printf("Invalid Choice..Please enter valid choice..");
//             break;
//         }

//     } while (choice != 0);

//     return 0;
// }

// void add()
// {
//     int a, b;
//     printf("Enter a and b value :\n");
//     scanf("%d %d", &a, &b);
//     printf("Addition of a + b = %d\n", a + b);
// }

// void sub()
// {
//     int a, b;
//     printf("Enter a and b value :\n");
//     scanf("%d %d", &a, &b);
//     printf("Substraction of a - b = %d\n", a - b);
// }

// void mul()
// {
//     int a, b;
//     printf("Enter a and b value :\n");
//     scanf("%d %d", &a, &b);
//     printf("Multiplication of a * b = %d\n", a * b);
// }

// void div()
// {
//     int a, b;
//     printf("Enter a and b value :\n");
//     scanf("%d %d", &a, &b);
//     printf("Division of a / b = %d\n", a / b);
// }

// #include <stdio.h>
/* 5
   5 4
   5 4 3
   5 4 3 2
   5 4 3 2 1
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 5; j >= 6 - i; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
/* 4 5
   4 5 4 6
   4 5 4 6 4 7
   4 5 4 6 4 7 4 8
   4 5 4 6 4 7 4 8 4 9
*/
// int main(){
//     for(int i=45; i<=49; i++){
//         for(int j=45; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 5
   4 4
   3 3 3
   2 2 2 2
   1 1 1 1 1
*/
// int main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <=6- i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int f = 1, n;
//     printf("Enter any number..\n");
//     scanf("%d", &n);
//     while(n>=1){
//         f= f*n;
//         n--;
//     }
//     printf("Factorial no = %d\n", f);
//     return 0;
// }

// #include <stdio.h>
// void palli();
// int main()
// {
//     int i, n;
//     printf("enter number:");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         palli();
//     }
//     return 0;
// }
// void palli()
// {
//     int j, t, no, sum = 0;
//     printf("enter the value of digit");
//     scanf("%d", &no);

//     while (no > 0)
//     {
//         j = no % 10;
//         sum = (sum * 10) + j;
//         no = no / 10;
//     }
//     printf("%d\n", sum);
// }

// #include <stdio.h>
// int main()
// {
//     int no, first, last, sum = 0;
//     printf("Enter the number:");
//     scanf("%d", &no);
//     first = no;
//     while (first >= 10)
//     {
//         first = first / 10;
//     }
//     last = no % 10;
//     sum = first + last;
//     printf("Sum of first and last number = %d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int no, sum = 0, mul = 1, i;
//     printf("Enter the number:");
//     scanf("%d", &no);
//     while (no > 0)
//     {
//         i = no % 10;
//         sum = sum + i;
//         mul = mul * i;
//         no = no / 10;
//     }
//     if(sum == mul){
//         printf("Magic Number\n");
//     }
//     else{
//         printf("Not Magic Number\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[10], n, max = 0,min;
//     printf("Enter array size : \n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("Max number is = %d \n",max);
//     min = max;
//     for(int i=0; i<n; i++){
//         if(a[i]<min){
//             min = a[i];
//         }
//     }
//     printf("Min number is = %d \n",min);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int no, i,sum=0;
//     printf("Enter digits :\n");
//     scanf("%d", &no);
//     no = no / 10;
//     while (no > 0)
//     {
//         i = no % 10;
//         sum = sum + i;
//         no = no / 10;
//     }
//     printf("Sum of middle digit = %d ",sum);
//     return 0;
// }

// #include <stdio.h>
/* 1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14 15
*/
// int main()
// {
//     int n = 1;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", n);
//             n++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1
   1 0
   1 0 1
   1 0 1 0
   1 0 1 0 1
*/
// int main()
// {
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             if(j%2==1){
//                 printf("0 ");
//             }
//             else{
//                 printf("1 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1
   0 1
   0 1 0
   1 0 1 0
   1 0 1 0 1
*/
// int main()
// {
//     int n = 1;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (n % 2 == 1)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("0 ");
//             }
//             n++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
/* 1
   0 0
   1 1 1
   0 0 0 0
   1 1 1 1 1
*/
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             if(i%2==1)
//             {
//                 printf("1 ");
//             }
//             else{
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
/* 1
   * *
   1 2 3
   * * * *
   1 2 3 4 5
*/
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 == 0)
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
//    int sum = 0, j, t, no;
//    printf("enter the value of digit\n");
//    scanf("%d", &no);
//    t = no;
//    while (no > 0)
//    {
//       j = no % 10;
//       sum = (sum * 10) + j;
//       no = no / 10;
//    }
//    printf("%d\n", sum);
//    if (sum == t)
//    {
//       printf("pallindrome number\n");
//    }
//    else
//    {
//       printf("not pallindrome number\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/* 1 1 1
   2 2 2
   3 3 3
   4 4 4
   5 5 5
*/
// int main()
// {
//    for(int i=1; i<=5; i++){
//       for(int j=1; j<=3; j++){
//          printf("%d ", i);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/* 1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
*/
// int main()
// {
//    for (int i = 1; i <= 5; i++)
//    {
//       for (int j = 1; j <= 5; j++)
//       {
//          printf("%d ", j);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/* 100 99 98 97
   100 99 98 97
   100 99 98 97
*/
// int main()
// {
//    for (int i = 1; i <= 3; i++)
//    {
//       for (int j = 100; j >= 97; j--)
//       {
//          printf("%d ", j);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/*  99 99 99
    98 98 98
    97 97 97
    96 96 96
*/
// int main()
// {
//    for (int i = 99; i >= 96; i--)
//    {
//       for (int j = 1; j <= 3; j++)
//       {
//          printf("%d ", i);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/*  76 77 78 79 80
    76 77 78 79 80
    76 77 78 79 80
    76 77 78 79 80
*/
// int main()
// {
//    for (int i = 1; i <= 4; i++)
//    {
//       for (int j = 76; j <= 80; j++)
//       {
//          printf("%d ", j);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/*  400 400
    401 401
    402 402
    403 403
*/
// int main()
// {
//    for (int i = 400; i <= 403; i++)
//    {
//       for (int j = 1; j <= 2; j++)
//       {
//          printf("%d ", i);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
/*         *
         1 2
       * * *
     1 2 3 4
   * * * * *
*/
// int main()
// {
//    for(int i=1; i<=5; i++){
//       for(int k=1; k<=5-i; k++){
//          printf("  ");
//       }
//       for(int j=1; j<=i; j++){
//          if(i%2==0){
//             printf("%d ",j);
//          }
//          else{
//             printf("* ");
//          }
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int a[10], n, search;
//    printf("Enter array size: \n");
//    scanf("%d", &n);
//    printf("Enter %d elements in array: \n", n);
//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &a[i]);
//    }
//    printf("Which element position you want to find : \n");
//    scanf("%d", &search);
//    for (int i = 0; i < n; i++)
//    {
//       if (a[i] == search)
//       {
//          search = i;
//       }
//    }
//    printf("Position = %d ",search);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    float r;
//    printf("Enter rupees : \n");
//    scanf("%f",&r);
//    int rupees = r;
//    int p = (r-rupees)*100;
//    printf("Rupees = %d\n Paisa = %d \n",rupees,p);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int a[10], n, search, replace, i;
//    printf("Enter array size: \n");
//    scanf("%d", &n);
//    printf("Enter %d elements in array: \n", n);
//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &a[i]);
//    }
//    printf("Which record you want to find : \n");
//    scanf("%d", &search);
//    printf("which number you want to replace : \n");
//    scanf("%d", &replace);
//    for (int i = 0; i < search; i++)
//    {
//       if (a[i] == search)
//       {
//          search = i;
//       }
//    }
//    for (int i = 0; i < search; i++)
//    {
//       if (a[i] == search)
//       {
//          search = a[i];
//       }
//    }
//    a[search] = replace;
//    printf("Replaced array : \n");
//    for (int i = 0; i < n; i++)
//    {
//       printf("%d ", a[i]);
//    }
//    return 0;
// }

// #include <stdio.h>
// int fac(int n);
// int main()
// {
//    int n;
//    printf("Enter Your Number : \n");
//    scanf("%d", &n);
//    int ans = fac(n);
//    printf("Factorial is = %d", ans);
//    return 0;
// }
// int fac(int n)
// {
//    if (n != 1)
//    {
//       printf("%d ",n);
//       return n * fac(n - 1);
//    }
//    else
//    {
//       printf("%d ",n);
//       return 1;
//    }
// }

// #include <stdio.h>
// int fac(int);
// int main()
// {
//    int n;
//    printf("Enter Your Number : \n");
//    scanf("%d", &n);
//    int ans = fac(n);
//    return 0;
// }
// int fac(int n)
// {
//    if (n != 10)
//    {
//       printf("%d ",n);
//       return fac(n + 1);
//    }
//    else
//    {
//       printf("%d ",n);
//       return 1;
//    }
// }

// #include <stdio.h>
// int fact(int);
// int main()
// {
//    int n;
//    printf("Enter Number ..\n");
//    scanf("%d", &n);
//    int ans = fact(n);
//    return 0;
// }
// int fact(int n)
// {
//    if (n == 1)
//    {
//       printf("%d ", n);
//       return 1;
//    }
//    else
//    {
//       printf("%d ", n);
//       return n + fact(n - 1);
//    }
// }

// #include <stdio.h>
// int fact(int);
// int main()
// {
//    int n;
//    printf("Enter Number ..\n");
//    scanf("%d", &n);
//    int ans = fact(n);
//    return 0;
// }
// int fact(int n)
// {
//    if (n == 1)
//    {
//       printf("%d ", n);
//       return 10;
//    }
//    else
//    {
//       printf("%d ", n);
//       return fact(n - 1);
//    }
// }

// #include <stdio.h>
// int factorial(int);
// int main()
// {
//    int ans, n;
//    printf("enter your number:");
//    scanf("%d", &n);
//    ans = factorial(n);
//    return 0;
// }
// int factorial(int n)
// {
//    if (n == 10)
//    {
//       printf("%d", n);
//       return 10;
//    }
//    else
//    {
//       printf("%d\n", n);
//       return factorial(n + 1);
//    }
// }

// #include <stdio.h>
// int main()
// {
//    int a[10], n;
//    printf("Enter array size : \n");
//    scanf("%d", &n);
//    printf("Enter array elements : \n");
//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d", &a[i]);
//    }
//    printf("Reverse Array : \n");
//    for (int i = n - 1; i >= 0; i--)
//    {
//       printf("%d ", a[i]);
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int n, sum = 0, i;
//    printf("Enter Number : \n");
//    scanf("%d", &n);
//    while (n > 0)
//    {
//       i = n % 10;
//       sum = (sum * 10) + i;
//       n = n / 10;
//    }
//    printf("Reverse Number = %d",sum);
//    return 0;
// }

// #include <stdio.h>
/* A
   A B
   A B C
   A B C D
   A B C D E
*/
// int main()
// {
//    for (int i = 1; i <= 5; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          printf("%c ", 'A' + j - 1);
//       }
//       printf("\n");
//    }

//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int a[10][10], m, n;
//    printf("How many row and column you want : \n");
//    scanf("%d %d", &m, &n);
//    printf("Enter your array element : \n");
//    for (int i = 0; i < m; i++)
//    {
//       for (int j = 0; j < n; j++)
//       {
//          scanf("%d", &a[i][j]);
//       }
//    }
//    printf("Transpose Matrix : \n");
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < m; j++)
//       {
//          printf("%d ", a[j][i]);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int n, i;
//    char a[10];
//    printf("how many record you want to inssert in this array:\n");
//    scanf("%d", &n);
//    printf("enter your record: \n");
//    for (i = 0; i < n; i++)
//    {
//       scanf(" %c", &a[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//       if (a[i] >= 65 && a[i] <= 90)
//       {
//          printf("Uppercase = %c \n", a[i]);
//       }
//       else
//       {
//          printf("Lowercase = %c \n", a[i]);
//       }
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int f = 0, s = 1, t, n, i;
//    printf("Enter any number :\n");
//    scanf("%d", &n);
//    // printf("%d %d\t", f, s);
//    for (i = 1; i <= n; i++)
//    {
//       printf("%d\t", t);
//       f = s;
//       s = t;
//       t = f + s;
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int sy, ey;
//    printf("Enter starting and ending year : \n");
//    scanf("%d %d", &sy, &ey);
//    for (int i = sy; i <= ey; i++)
//    {
//       if (i % 4 == 0)
//       {
//          printf("%d ",i);
//       }
//    }
//    return 0;
// }

