#include <stdio.h>

char get_grade(int mark);

int main() {
    int mark;
    printf("Enter student's mark: ");
    scanf("%d", &mark);

    char grade = get_grade(mark);
    printf("Student's grade is: %c\n", grade);

    return 0;
}

char get_grade(int mark) {
    char grade;

    if (mark >= 80 && mark <= 100) {
        grade = 'A';
    } else if (mark >= 60 && mark <= 79) {
        grade = 'B';
    } else if (mark >= 40 && mark <= 59) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    return grade;
}
