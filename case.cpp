#include <cstdio>
#include <cstdlib>

int main()
{
    int c;
    
    printf("What's your favourite planet?\n");
    printf("1. Mercury\n");
    printf("2. Venus\n");
    printf("3. Earth\n");
    printf("4. Mars\n");
    printf("5. Jupiter\n");
    printf("6. Saturn\n");
    printf("7. Uranus\n");
    printf("8. Neptune\n");
    printf("Enter a number: ");
    scanf("%d", &c);
    printf("You entered: %d\n", c);
    
    switch (c)
    {
        case 1:
            printf("Your favourite planet is Mercury.\n");
            break;
        case 2:
            printf("Your favourite planet is Venus.\n");
            break;
        case 3:
            printf("Your favourite planet is Earth.\n");
            break;
        case 4:
            printf("Your favourite planet is Mars.\n");
            break;
        case 5:
            printf("Your favourite planet is Jupiter.\n");
            break;
        case 6:
            printf("Your favourite planet is Saturn.\n");
            break;
        case 7:
            printf("Your favourite planet is Uranus.\n");
            break;
        case 8:
            printf("Your favourite planet is Neptune.\n");
            break;
        default:
            printf("Invalid input!\n");
            exit(1);
    }
    
    return 0;
}
