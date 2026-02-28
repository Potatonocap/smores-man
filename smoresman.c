#include <stdio.h>
#include <stdlib.h>

int money = 10;
int price = 6;
char answer;

int main(void) {
    printf("There is a man that sells s'mores, a s'more costs %d$\n", price);
    printf("You have %d$\n", money);
    printf("Buy a s'more? \n");
    printf(">");
    scanf(" %c", &answer);

    if (answer == 'y') {
        printf("You bought a s'more \n");
        money = money - price;
        printf("You now have %d$\n", money);
        exit(0);
    }
    else if (answer == 'n') {
        printf("Bye!");
        exit(0);
    }
    else {
        printf("nope");
    }

    return 0;
}