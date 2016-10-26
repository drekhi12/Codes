n=int(input()) 
for i in range (1,n):
    for k in range (1,n-i):
            print("_",end='')
    for j in range (1,i+1):
        print (j,end="")
    print('')
