string=input() 
wordStartIndex=0 
outputString="" 
for i in range (0,len(string)):
    endIndex=i 
    wordStartIndex=i+1
    for k in range( endIndex, wordStartIndex-1, -1):
        if(i==len(string)-1):
            endIndex=i-1
        if( string[i] == ' ' or i==len(string)-1):
            outputString=outputString + string[k]
        else:
            outputString=outputString + " "
            
print(outputString)
