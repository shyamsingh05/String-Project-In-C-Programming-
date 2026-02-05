#include<stdio.h>
#include<string.h>
#include<conio.h>

void inputString();
void MainMenu(char *);
void convertUpperCase(char *);
void convertLowerCase(char *);
void reverseString(char *);
void reverseOnPosition(char *);
void firstLetterWordUpperCase(char *);
void lastLetterWordUpperCase(char *);
void countOccurance(char *);

void main()
{
    inputString();   // ✅ program starts here
}

void inputString()
{
    char input[40];
    printf("***** Welcome to String Operation Project *****\n\n");
    printf("Enter String -- ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';   // remove newline

    printf("\nYou Enter -- %s\n\n", input);
    MainMenu(input);
}

void MainMenu(char *input)
{
    char c;
    printf("\n\n***** String Operation Project *****\n\n");
    printf("1. Convert UpperCase Letter\n");
    printf("2. Convert LowerCase Letter\n");
    printf("3. Reverse String\n");
    printf("4. Reverse Each Word on their Position\n");
    printf("5. Convert First Letter of Each Word into Uppercase\n");
    printf("6. Convert Last Letter of Each Word into Uppercase\n");
    printf("7. Count Occurrence of Each Letter\n");
    printf("Enter Your Choice -- ");

    c = getch();

    if (c == '1') convertUpperCase(input);
    else if (c == '2') convertLowerCase(input);
    else if (c == '3') reverseString(input);
    else if (c == '4') reverseOnPosition(input);
    else if (c == '5') firstLetterWordUpperCase(input);
    else if (c == '6') lastLetterWordUpperCase(input);
    else if (c == '7') countOccurance(input);

    printf("\n\nPress s for same string, n for new string...\n\n");
    c = getch();

    if (c == 's') MainMenu(input);
    else if (c == 'n') inputString();
}

void convertUpperCase(char *input)
{
    int i;
    for (i = 0; input[i] != '\0'; i++)
        if (input[i] >= 'a' && input[i] <= 'z')
            input[i] -= 32;

    printf("\n%s", input);
    getch();
}

void convertLowerCase(char *input)
{
    int i;
    for (i = 0; input[i] != '\0'; i++)
        if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] += 32;

    printf("\n%s", input);
    getch();
}

void reverseString(char *input)
{
    int i;
    for (i = strlen(input) - 1; i >= 0; i--)
        printf("%c", input[i]);
    getch();
}

void firstLetterWordUpperCase(char *input)
{
    int i;
    for (i = 0; input[i] != '\0'; i++)
        if (i == 0 || input[i - 1] == ' ')
            if (input[i] >= 'a' && input[i] <= 'z')
                input[i] -= 32;

    printf("\n%s", input);
    getch();
}

void lastLetterWordUpperCase(char *input)
{
    int i;
    for (i = 0; input[i] != '\0'; i++)
        if (input[i + 1] == ' ' || input[i + 1] == '\0')
            if (input[i] >= 'a' && input[i] <= 'z')
                input[i] -= 32;

    printf("\n%s", input);
    getch();
}

void countOccurance(char *input)
{
    char tmp[40] = "";   // ✅ initialized
    int i, j, k = 0, count, found;

    for (i = 0; input[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; tmp[j] != '\0'; j++)
            if (tmp[j] == input[i])
                found = 1;

        if (!found)
        {
            count = 0;
            for (j = 0; input[j] != '\0'; j++)
                if (input[i] == input[j])
                    count++;

            tmp[k++] = input[i];
            tmp[k] = '\0';

            printf("Occurrence of %c = %d\n", input[i], count);
        }
    }
    getch();
}

void reverseOnPosition(char *input)
{
    char temp[20];
    int i, j = 0, k, l;

    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ')
        {
            temp[j++] = input[i];
            l = i;
        }
        else
        {
            temp[j] = '\0';
            for (k = 0; temp[k] != '\0'; k++, l--)
                input[l] = temp[k];
            j = 0;
        }
    }

    temp[j] = '\0';
    for (k = 0; temp[k] != '\0'; k++, l--)
        input[l] = temp[k];

    printf("\n%s", input);
    getch();
}
