number_of_elements=input()
array=[int(x) for x in raw_input().split()]
current_sum=0
total_sum=sum(array)
for j in range(number_of_elements):
    total_sum-=array[j]
    current_sum+=array[j]
    if current_sum>total_sum:
        print "NO"
        break
    if current_sum==total_sum:
        print "YES"
        break 
