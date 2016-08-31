import urllib2
import re
from bs4 import BeautifulSoup
roll=41001
while roll<42978:
    big=1
    url='http://punjabiuniversity.ac.in/puexam/t2/results/results.php?rslstid=11072307&ROLL='+str(roll)+'&submit=Submit'
    html = urllib2.urlopen(url).read()
    soup=BeautifulSoup(html,"html.parser")
    name=soup.find('td',{"class":'c3'})
    marks=soup.find('table', id='resultTbl')
    try:
        cells = marks.find_all("td")
        six=cells[6].get_text()
        ten=cells[10].get_text()
        ft=cells[14].get_text()
        ei=cells[18].get_text()
        try:
            if six!='--' or six!='Absent' and ten!='--' and ft!='--' and ei!='--':
                total=int(six)+int(ten)+int(ft)+int(ei)
        except:
            print "Not valid"
            total=0
        print name.get_text()+" "+ str(total)
        if big<total:
            big=total
            topper=name
    except:
        print "roll is "+str(roll)
        roll+=1
print "The topper is " + topper + "and marks are " + str(big)
