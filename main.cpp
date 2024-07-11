#include "mbed.h"



int t_1 = 0;
int t_2 = 1;
int next_term = 0;


int max_terms = 10;

int main()
{
    printf("finbonachi series: %d, %d,\r\n", t_1, t_2);
    for(int i=0; i<max_terms; i++){
        next_term = t_1 + t_2;
        printf("%d, ", next_term);
    

    }
    printf("\r\n");
    

    while (true) {

    }
}

