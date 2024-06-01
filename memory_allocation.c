#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student*) malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("Enter name, age, and marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].marks);
    }

    printf("Student Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }

    free(students);
    return 0;
}
