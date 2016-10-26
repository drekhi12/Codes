N=input()
li=map(int, raw_input().split())
element=input()
top = len(li)-1
bottom = 0
index = -1
while top>=bottom and index==-1:
    mid = (top+bottom)/2 
    
    if li[mid]==element:
        index = mid
    elif li[mid]>element:
        top = mid-1
    else:
        bottom = mid+1
    
print index 
  
 
 
