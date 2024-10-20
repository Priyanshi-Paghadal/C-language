// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter any number : \n");
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int unit, amount;
//     printf("Enter Unit : \n");
//     scanf("%d", &unit);
//     if (unit < 50)
//     {
//         amount = unit * 0.50;
//         printf("Amount = %d ", amount);
//     }
//     else if (unit < 150)
//     {
//         amount = (unit - 50) * 0.75 + (50 * 0.50);
//         printf("Amount = %d ", amount);
//     }
//     else if (unit < 250)
//     {
//         amount = (unit - 150) * 1.20 + (100 * 0.75) + (50 * 0.50);
//         printf("Amount = %d ", amount);
//     }
//     else
//     {
//         amount = (unit - 250) * 1.50 + (100 * 1.20) + (100 * 0.75) + (50 * 0.50);
//         printf("Amount = %d ", amount);
//     }
//     printf("Total bill = %f", amount + (amount * 0.20));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter a & b values : \n");
//     scanf("%d %d", &a, &b);
//     printf("Before swapping : \n a = %d \n b = %d \n", a, b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After swapping : \n a = %d \n b = %d \n", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("Enter any number for found how many digit there : \n");
//     scanf("%d", &n);

//     while (n != 0)
//     {
//         n = n / 10;
//         sum++;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int sum = 0, i, n;
//     printf("Enter Any Number :");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>
// struct employee
// {
//     int id;
//     char name[20];
//     float salary;
// };
// int main()
// {
//     int n;
//     printf("How many employees .. \n");
//     scanf("%d", &n);

//     struct employee em[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter employess %d details :\n", i);
//         printf("Employee id : ");
//         scanf("%d", &em[i].id);
//         printf("Employee name : ");
//         scanf("%s", &em[i].name);
//         printf("Employee salary : ");
//         scanf("%f", &em[i].salary);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Employee id = %d\n", em[i].id);
//         printf("Employee name = %d\n", em[i].name);
//         printf("Employee salary = %f\n", em[i].salary);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    char a[100], i;
    printf("Enter any string :\n");
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    printf("toggle case string :%s\n", a);
    return 0;
}

// string-3.c