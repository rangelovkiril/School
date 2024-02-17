import re
from datetime import datetime

class Student:
    def __init__(self, number : int, names : list[str], grades : list) -> None:
        self.number = number
        self.names = names
        self.grades = grades

    def getaverage(self) -> float:
        if len(self.grades) == 0:
            return 0 
        return sum(self.grades) / len(self.grades)
    
def read_file_in_lines(path: str) -> list[str]:
    with open(path, 'r') as f:
        return f.readlines()
    
def write_file(path: str, data: str) -> str:
    with open(path, 'w') as f:
        return f.write(data)

def process_student_file(file_path: str) -> list[Student]:
    lines = read_file_in_lines(file_path)
    students: Student = []

    for line in lines:
        splitted = line.split(' ')
        names = [splitted[1], splitted[2], splitted[3]]
        grades = [float(splitted[i]) for i in range(4, len(splitted))]

        students.append(Student(int(splitted[0]), names, grades))

    return students

def evaluate_test(students: list[Student], file_path: str) -> str:
    average = 0
    for student in students:
        average += student.getaverage()
    average /= len(students)

    good_grades = 0
    for student in students:
        if(3.50 < student.getaverage() < 4.50):
            good_grades += 1

    excellent_students = []
    for student in students:
        if(student.getaverage() > 5.50):
            excellent_students.append(" ".join(student.names))
    excellent_students = "\n".join(excellent_students)

    was_test_hard = "Тестът беше труден!"
    if (average > 4.50):
        was_test_hard = "Тестът беше лесен!"
    
    created_on = datetime.now().strftime("%d %b %Y %H:%M")

    write_file(file_path, 
        f'Средната оценка беше: {average}\n\n'
        f'Общо има {good_grades} ученика, получили оценка добър 4.\n\n'
        f'Отличниците са:\n{excellent_students} \n\n'
        f'{was_test_hard}\n\n'
        f'{created_on}'
    )


if __name__ == "__main__":
    students = process_student_file("9a class.txt")
    evaluate_test(students, "eval_test.txt")