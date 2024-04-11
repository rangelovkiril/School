#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
  double  averageGrade;
  char    name[16];
  int     classNumber;
} Student;

void addStudent(Student* students, int* numberOfStudents) {
  if (*numberOfStudents < MAX){
    puts("Enter student's name: ");
    scanf("%s", students[*numberOfStudents].name);
    
    puts("Enter student's class number: ");
    scanf("%d", &students[*numberOfStudents].classNumber);
    
    puts("Enter student's average grade: ");
    scanf("%lf", &students[*numberOfStudents].averageGrade);
    
    (*numberOfStudents)++;
  }
  else
    puts("You cannot add more students. Maximum capacity reached.");
}

void printStudents(const  Student* students, int numberOfStudents) {
  puts("List of students:");
  for (int i = 0; i < numberOfStudents; ++i)
    printf("Name: %s, Class number: %d, Average grade: %.2f\n", students[i].name, students[i].classNumber, students[i].averageGrade);
}

int main() {
  Student* students = (Student*)malloc(MAX * sizeof(Student));
  int numberOfStudents = 0;

  puts("  This is simple program for managing students. Bellow is options:"
  "1. Add a student" \
  "2. Print list of students" \
  "3. Exit");

  while (1) {
  puts("Choose an option: ");
    
    int choice;
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addStudent(students, &numberOfStudents);
        break;
      case 2:
        printStudents(students, numberOfStudents);
        break;
      case 3:
        free(students);
        return 0;
      default:
        puts("Invalid choice. Please try again.");
    }
  }

  return 0;
}
