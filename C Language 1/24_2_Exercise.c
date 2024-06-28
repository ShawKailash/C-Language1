#include<stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.08333333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first,second;
    while(1)
    {
        printf("enter the input character. q to quit \n 1. kms to miles \n 2. inces to foot \n 3. cms to inches \n 4. pound to kgs \n 5. inches to meters\n");
        scanf(" %c",&input);
        printf("the character is '%c'\n",input);
        switch (input)
        {
            case 'q':
            printf("quitting the program .... ?");
            goto end;
            break;
            case '1':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * kmstomiles;
            printf("%.2f kms in equal to %.2f miles\n\n",first,second);
            break;        
            case '2':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * inchestofoot;
            printf("%.2f inches in equal to %.2f foot\n\n",first,second);
            break;        
            case '3':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * cmstoinches;
            printf("%.2f cms in equal to %.2f inches\n\n",first,second);
            break;        
            case '4':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * poundtokgs;
            printf("%.2f pound in equal to %.2f kgs\n\n",first,second);
            break;        
            case '5':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * inchestometers;
            printf("%.2f inches in equal to %.2f meters\n\n",first,second);
            break;        
            default:
            break;
        }
    }
    end:
    return 0;
}