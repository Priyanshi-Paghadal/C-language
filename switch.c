#include<stdio.h>

main()
{
    int num,type;
    printf("Pree 1 for English\n");
    printf("Pree 2 for Hindi\n");
    printf("Pree 3 for Gujarati\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
                
                printf("press 1 for Internet Recharge\n");
                printf("press 2 for Top-up Recharge\n");
                printf("press 3 for special Recharge\n");
                scanf("%d",&type);
                switch(type)
                {
                    case 1:
                        printf("You have successfully done Internet recharge\n");
                        break;
                    case 2:
                        printf("You have successfully done Top-up recharge\n");
                        break;
                    case 3:
                        printf("You have successfully done special recharge\n");
                        break;
                    default:
                        printf("invalid choice\n");
                        break;
                }
                break;
        case 2:
            
                printf("Internet recharge k liye 1 dabaiye\n");
                printf("Top-up recharge k liye 2 dabaiye\n");
                printf("special recharge k liye 3 dabaiye\n");
                scanf("%d",&type);
                switch(type)
                {
                    case 1:
                        printf("Aapne safaltavurvak Internet recharge kar liya hai\n");
                        break;
                    case 2:
                        printf("Aapne safaltavurvak Top-up recharge kar liya hai\n");
                        break;
                    case 3:
                        printf("Aapne safaltavurvak special recharge kar liya hai\n");
                        break;
                    default:
                        printf("invalid choice\n");
                        break;
                }
                break;
        case 3:
                
                printf("Internet Recharge mate 1 dabao\n");
                printf("Top-up Recharge mate 2 dabao\n");
                printf("special Recharge mate 3 dabao\n");
                scanf("%d",&type);
                switch(type)
                {
                    case 1:
                        printf("Tame safaltapurvak Internet recharge karyu che\n");
                        break;
                    case 2:
                        printf("Tame safaltapurvak Top-up recharge karyu che\n");
                        break;
                    case 3:
                        printf("Tame safaltapurvak special recharge karyu che\n");
                        break;
                    default:
                        printf("invalid choice\n");
                        break;
                }
                break;
        default:
                printf("Invalid choice\n");
                break;
    }
}
