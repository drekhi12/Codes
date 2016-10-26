def minSteps(P):
    Q,R,S = 1,2,2
    while(R < P):
        Q = Q + 1
        S = S + 1
        R = R + S
    return Q 
 
 


M = int(raw_input())


for j in range(1, M + 1):
    print minSteps(int(raw_input()))


 
 
