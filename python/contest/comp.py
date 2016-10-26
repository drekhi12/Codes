def fast_exp(x, n):
    if n == 0:
        return 1
    elif n % 2 == 0: 
        return fast_exp(x*x, n/2)
    else:
        return x * fast_exp(x, n-1) 
 
 

b=int(input()) 
e=int(input())
print(fast_exp(b,e))
