#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 4

int main() {
    int score[STUDENTS][SUBJECTS] = {
        {85, 74, 63, 90},
        {78, 65, 70, 62},
        {89, 92, 88, 76},
        {32, 48, 66, 25},
        {92, 76, 81, 98}
    };

    // Calculate and display subject averages
    for (int subject = 0; subject < SUBJECTS; ++subject) {
        int subjectTotal = 0;
        for (int student = 0; student < STUDENTS; ++student) {
            subjectTotal += score[student][subject];
        }
        double subjectAverage = (double)subjectTotal / STUDENTS;
        
        switch (subject) {
            case 0:
                printf("国語の平均点は%.1f です．\n", subjectAverage);
                break;
            case 1:
                printf("数学の平均点は%.1f です．\n", subjectAverage);
                break;
            case 2:
                printf("理科の平均点は%.1f です．\n", subjectAverage);
                break;
            case 3:
                printf("社会の平均点は%.1f です．\n", subjectAverage);
                break;
        }
    }

    // Calculate and display student averages
    for (int student = 0; student < STUDENTS; ++student) {
        int studentTotal = 0;
        for (int subject = 0; subject < SUBJECTS; ++subject) {
            studentTotal += score[student][subject];
        }
        double studentAverage = (double)studentTotal / SUBJECTS;

        printf("番号%d の学生の平均点は%.1f です．\n", student + 1, studentAverage);
    }

    return 0;
}