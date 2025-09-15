#include <stdio.h>




int main()
{
    /* code */

    int highScores[5] = {123, 92, 134, 100, 98};
    int newScores[3] = {0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        printf("Highscores for last 5 tries, try nr %d: %d\n",i+1, highScores[i]);
    }
    
    for (int j = 0; j < 3; j++)
    {
    
        printf("Input a new highscore: ");
        scanf("%d", &newScores[j]);

    }

    for (int i = 0; i < 3; i++)
    {
        printf("Highscores for new scores: %d\n", newScores[i]);
    }
    

    return 0;
}
