n=int(input()) 
for i in range (1,n):
    for j in range (1,i+1):
        for k in range (1,n-i):
            print (j,end="")
            print("_",end="")
            print('')
