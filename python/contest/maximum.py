N, No_of_operations=[int(x) for x in raw_input().split()]
a,b,k=[int(x) for x in raw_input().split()]
Array, current_sum,Max=[0]*N,0,0
for i in range(N):
    current_sum+=Array[i]
    for i in range(No_of_operations):
        if b!=N:
            Array[b]-=k
            Array[a-1]+=k
        if Max<current_sum:
            Max=current_sum
 
print Max 
 
 
 
 
 
