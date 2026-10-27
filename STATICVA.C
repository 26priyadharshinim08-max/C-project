#include<stdio.h>
struct student {
    int id;
    char name[20];
    float marks;
};
int main() {
    struct student s1 = {1,"Priya",85.5};
    printf("ID: %d\n",s1.id);
    printf("Name: %s\n",s1.name);
    printf("Marks: %.1f\n",s1.marks);
    return 0;
}