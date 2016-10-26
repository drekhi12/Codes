def y(x): 
    if(x != 0):
        z(x)
        print('')
        y(x-1)
    

def z(x): 
    if(x != 0):
        print('#',end='')
        z(x-1)
    
 
 
 
 
 


n=int(input())
y(n)
