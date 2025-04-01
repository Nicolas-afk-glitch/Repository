#include "stdio.h"

void hello(){
    printf("Hello World");
}

void compare(int a,int b){
    if (a>=b){
        printf("The larger value is ");
        printf("%d",a);
    }
    else{
        printf("The larger value is ");
        printf("%d",b);
    }
}

void print_to_number_for(int a){
    for (int i=0;i<=a;i++){
        printf("\n");
        printf("%d",i);
    }
}

void print_to_number_while(int a){
    int i =0;
    while(i<=a){
        printf("\n");
        printf("%d",i);
        i++;
    }
}

void print_adress(int a){
    int *p=&a;
    printf("\n%p",p);
}

int sum(int a, int b){
    return a+b;
}

int sum_bis(int *a, int *b){
    return *a+*b;
}

int search(int *tableau,int b){
    i=0
    int taille = sizeof(tableau) / sizeof(tableau[0]);

}