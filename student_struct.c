#include <stdio.h>
#include <stdlib.h>

struct student
 {
    char name[50];
    int age;
    float marks;
 };


int main(){
    struct student *k;

    k=(struct student*)malloc(sizeof(struct student));
    // k->name=(char*)malloc(sizeof(char));
    // (k->name=munna);
    k->age=20;
    k->marks=80.5;
    printf("Name: %s\nAge: %d\nMarks: %.2f\n",k->name,k->age,k->marks);




}