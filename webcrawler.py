from bs4 import BeautifulSoup
import requests

url=raw_input('Enter the URL')
r=requests.get("http://"+url)

data = r.text

soup=BeautifulSoup(data,'html5lib')

for d in soup.find_all('img'):
    try:
        print d['alt']
    except:
        pass
