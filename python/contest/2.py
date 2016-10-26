string=input()
count=dict()
for i in range (0,len(string)): 
     
 
for i in range (0, len(l)):
    l= list(count.values())
    if l[i]>1: 
        flag=1
        break
flag=0 

temp=string[i]

if(count.__contains__(temp)):
    count[temp] = count[temp] + 1 
else:
    count[temp]=1 
 
if(flag):
    print ("NO") 
else:
    print ("YES")
