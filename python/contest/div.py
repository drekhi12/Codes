t=input()
while t>0:
    a,b=map(int, raw_input().split())
    c=a^b
    p=0
    while c:
        c=c&(c-1)
        p=p+1
    print p
    t=t-1 
