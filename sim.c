#include<stdio.h>

#include<math.h>

int poissonRandom(double a) {
    int n = 0; //counter of iteration
    double limit;
    double x;  //pseudo random number
    int INT_MAX=100;
    limit = exp(-20);
    x = rand() / INT_MAX;
    while (x > limit) {
        n++;
        x *= rand() / INT_MAX;
    }
    return n;
}

int main()
{
    int i;
    int inter_arrive[20];
    int arrival[20];
    poissonRandom(19.0);

    inter_arrive[0] = 0;
    arrival[0] = 0;

    for(i=1;i<20;i++){
        inter_arrive[i]= poissonRandom(19.0);
    }

    for(i=1;i<20;i++){

        arrival[i] = arrival[i-1] + inter_arrive[i];
    }

    for(int i=0; i<20; i++){
        printf("%d\t %d \t%d\t", i, inter_arrive[i], arrival[i]);
        printf("\n");
        }

    return 0;
}

