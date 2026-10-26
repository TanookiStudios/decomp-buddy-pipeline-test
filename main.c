/* Tanooki Test Run: a tiny guess-the-number game. It exists only to test Decomp Buddy's publishing pipeline. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int target = rand() % 100 + 1, guess = 0, tries = 0;
    printf("Tanooki Test Run\nI'm thinking of a number from 1 to 100.\n");
    while (guess != target) {
        printf("Your guess: ");
        fflush(stdout);
        if (scanf("%d", &guess) != 1) return 0;
        tries++;
        if (guess < target) printf("Higher!\n");
        else if (guess > target) printf("Lower!\n");
    }
    printf("Got it in %d tries. Thanks for testing!\n", tries);
    return 0;
}
