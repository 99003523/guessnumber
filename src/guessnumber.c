#include <guessnumber.h>
int Score;
void MainMenu()
{
    char name[25];
    printf("Enter name: ");
    scanf("%4s", name);
    printf("\nHello %s Welcome to Guessing Game.\n",name);
    printf("RULES:\n1. Only 8 chances to guess the randomly generated number.");
    printf("\n2. You can WIN the game when the number guessed is same as the randomly generated number.");
    printf("\n3. Hints will be provided during the PLAY.");
    printf("\n\n$$$ Good Luck. Start Guessing $$$");
    printf("\n\nPick a choice from the following:\n");
    printf("1.Play Guess My Number Game.\n2.Print Rank.\n3.Quit.\n\n");
}

int GetChoice(int min,int max)
{
    int Choice=0;
    while(Choice < min || Choice > max)
    {
        printf("Enter a choice from %d to %d:\n",min,max);
        scanf("%d",&Choice);
    }
    return Choice;
}

double guessGame()
{
    int max;
    double InScore;
    int digits;
    int Score;
    int guess = 0;
    int random = 0;
    int i=0;
    int start = time(0);
    printf("\nWhat maximum number would you like to guess?\n");
    scanf("%d",&max);
    digits = NumDigits(max);
    srand(time(0));
    random = rand() % max + 1;
    printf("\nNow Guess a number:\n");
    scanf("%d",&guess);
    i++;
    while(guess != random)
    {
        if(guess < random)
        {
            printf("You guess is too low.Guess again.\n");
        }
        else if(guess > random)
        {
            printf("Your guess is too high.Guess again\n");
        }
        scanf("%d",&guess);
        i++;
    }
    int end = time(0);
    int timespent = end-start;
    printf("\nYou guessed correctly with %d tries and %d seconds.\n",i,timespent);
    InScore = timespent/(2*digits);
    Score += numPoints(InScore);
    return InScore;
}
void PrintScore()
{
    printf("\nYour current rank is %d.\n", Score);
}

void Quit()
{
    printf("\nThank you for playing!\n\n");
    exit(0);
}
int NumDigits(int number)
{
    int count = 0;
    while(number!=0)
    {
        number/=10;
        count++;
    }
    return count;
}

int numPoints(double timesec)
{
    if(timesec < 1)
    {
        return 10;
    }
    else if(timesec < 2)
    {
        return 9;
    }
    else if(timesec < 3)
    {
        return 8;
    }
    else if(timesec < 4)
    {
        return 7;
    }
    else if(timesec < 5)
    {
        return 6;
    }
    else if(timesec < 6)
    {
        return 5;
    }
    else if(timesec < 7)
    {
        return 4;
    }
    else if(timesec < 8)
    {
        return 3;
    }
    else if(timesec < 9)
    {
        return 2;
    }
    else if(timesec <= 10)
    {
        return 1;
    }
}
