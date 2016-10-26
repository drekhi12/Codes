import math


def pascals_triangle(rows):
    
    row = []
    for count in range(rows):
        
        result = []
        for element in range(count + 1):
            row.append(combination(count, element))
            print(row)
    return result


def combination(n, r):
    return int((math.factorial(n)) / ((math.factorial(r)) * math.factorial(n - r))) 
 
  


n=int(input())

for row in pascals_triangle(n):
    result.append(row)
    
