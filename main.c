#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score = 0;
    int answer;
    int negative_mark = -1;
    int questions[5] = {0,1,2,3,4};

    srand(time(0));

    // Shuffle questions array
    for(int i=4; i>0; i--){
        int j = rand() % (i+1);
        int temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }

    printf("===== Jay's ONLINE QUIZ =====\n");
    printf("Rules:\n");
    printf("+1 for correct answer\n");
    printf("-1 for wrong answer\n");
    printf("Enter only numbers 1 to 4\n\n");

    for (int i = 0; i < 5; i++) {
        int q = questions[i]; // pick non-repeating question

        if (q == 0) {
            printf("\nQ%d. What is the capital of France?\n", i+1);
            printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
        }
        else if (q == 1) {
            printf("\nQ%d. Which language is used for system programming?\n", i+1);
            printf("1. Python\n2. C\n3. Java\n4. HTML\n");
        }
        else if (q == 2) {
            printf("\nQ%d. Who developed the C language?\n", i+1);
            printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
        }
        else if (q == 3) {
            printf("\nQ%d. What is 5 + 3 * 2?\n", i+1);
            printf("1. 16\n2. 11\n3. 13\n4. 10\n");
        }
        else if (q == 4) {
            printf("\nQ%d. Which symbol is used for comments in C?\n", i+1);
            printf("1. //\n2. #\n3. <!-- -->\n4. **\n");
        }

        // Input validation loop
        while(1){
            printf("Enter answer (1-4): ");
            if(scanf("%d",&answer)!=1){
                printf("Invalid input! Enter a number.\n");
                while(getchar()!='\n'); // clear buffer
                continue;
            }
            if(answer<1 || answer>4){
                printf("Wrong input! Choose between 1 and 4.\n");
                continue;
            }
            break;
        }

        // Check correct answer
        if ((q==0 && answer==3) ||
            (q==1 && answer==2) ||
            (q==2 && answer==1) ||
            (q==3 && answer==2) ||
            (q==4 && answer==1))
            score++;
        else
            score += negative_mark;

        if(score<0) score=0;
    }

    printf("\n===== QUIZ COMPLETED =====\n");
    printf("Final Score: %d / 5\n", score);

    return 0;
}
