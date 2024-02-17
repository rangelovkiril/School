def extract (dictionary, keys):
    result = {}

    for key in keys:
        result[key] = dictionary[key]
    
    return result
 

if __name__ == "__main__":

    employee = {
        "name" : "Svetla",
        "surname" : "Despotova",
        "age" : 25,
        "salary" : 200,
        "city" : "Pavlikeni"
    }

    salary = extract(employee, ['name', 'salary'])  
    print(salary)