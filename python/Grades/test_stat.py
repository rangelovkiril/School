import re
from datetime import datetime

def read_file(path: str) -> str:
    with open(path, 'r') as f:
        return f.read()
    
def write_file(path: str, data: str) -> str:
    with open(path, 'w') as f:
        return f.write(data)

       
def find_exellent_students(students: list, grades: list) -> int:
    exelents = []
    
    for student in range(len(grades)):
        if float(grades[student]) >= 5.5:
            exelents.append(students[student])
            
    return exelents

def count_good_grades(grades: list) -> list:
    goods = 0

    for grade in range(len(grades)):
        if float(grades[grade]) >= 3.5 and float(grades[grade]) < 4.5:
            goods += 1

    return goods

def find_average(grades: list) -> float:
    average = 0

    for grade in range(len(grades)):
        average += float(grades[grade])

    return average / len(grades)

def test_evaluation(average_grade: float) -> str:
    evaluation = ''
    
    if average_grade < 4.5:
        evaluation = "контролното беше трудно!" 
    else:
        evaluation = "контролното беше лесно!"

    return evaluation

def save_test_stat(students: list, grades: list, filename: str) -> None:
    
    exellent_students = find_exellent_students(students, grades)
    good_grades = count_good_grades(grades)
    average = find_average(grades)
    was_test_hard = test_evaluation(average)

    formated_names = '\n'.join(f'{name}' for name in exellent_students)
    created_on = datetime.now().strftime("%d %b %Y %H:%M")

    write_file(
           "test_odit.txt", 
           f'Средната оценка на последният тест беше {average}.\n\n'
           f'Общо има {good_grades} ученика, получили оценка добър 4.\n\n'
           f'Отличницете ca:\n\n{formated_names}\n\n' 
           f'Оценките окончателно показват, че {was_test_hard}\n\n' 
           f'{created_on}'
    )

if __name__ == "__main__":
    data = read_file("9a class.txt")

    students = re.findall(r'\d? (\w+ \w+ \w+) ', data)
    grades = re.findall(r'\w+ (\d+.?\d*)', data)

    save_test_stat(students, grades, "stat.txt")
   
