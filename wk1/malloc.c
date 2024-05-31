#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[15];
    double wam;
};

int main(void) {
    // malloc default value
    int *num = malloc(sizeof(int));
    printf("default value of (int):   0x%x\n", *num);
    int **num2 = malloc(sizeof(int *));
    printf("default value of (int *): %p\n", *num2);

    printf("\n");

    // [ASIDE] fun little 1521 fact, and why we use sizeof...
    // note the 4/8-byte alignment of the members of the struct
    struct student s;
    printf("memory addreses of struct student s\n");
    printf("sizeof(struct student) = %lu\n", sizeof(struct student));
    printf("&s      = %p, offset = %ld\n", &s, (void *)&s - (void *)&s);
    printf("&s.id   = %p, offset = %ld\n", &s.id, (void *)&s.id - (void *)&s);
    printf("&s.name = %p, offset = %ld\n", &s.name,
           (void *)&s.name - (void *)&s);
    printf("&s.wam  = %p, offset = %ld\n", &s.wam, (void *)&s.wam - (void *)&s);

    // malloc a struct student and give them an id, name, and wam
    struct student *s1 = malloc(sizeof(struct student));
    s1->id = 1;
    strcpy(s1->name, "Lucy");
    s1->wam = 59.4;

    // malloc an array of 10 struct students
    struct student *s2 = malloc(10 * sizeof(struct student));

    // malloc an array of 5 pointers to struct students
    struct student **s3 = malloc(5 * sizeof(struct student *));

    // malloc a 2D array of struct students with 5 'rows' and 10 'columns'
    struct student **s4 = malloc(5 * sizeof(struct student *));
    for (int i = 0; i < 5; i++) {
        s4[i] = calloc(10, sizeof(struct student));
    }
}
