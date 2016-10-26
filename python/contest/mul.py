n=raw_input()
str_arr = raw_input().split(' ') 
arr = [int(num) for num in str_arr]
k=1
for num in arr:
     k=(k*num)%1000000007 
 
print k 
