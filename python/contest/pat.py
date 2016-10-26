def y(x):
    if(x != 0):
        print('#',end='')
        y(x-1)
    z(x)

def z(x): 
 if(x != 0): 
    z(x-1) 
 print('') 

n=int(input())
y(n) 
