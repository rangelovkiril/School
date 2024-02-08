if __name__ == "__main__":
    
    grades = {
        "Math" : 87,
        "Physics" : 69,
        "IT" : 97
    }
    
    print(min(grades, key = grades.get)) 
