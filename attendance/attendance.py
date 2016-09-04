from PIL import Image
import mechanize,cookielib
from mechanize import Browser
from bs4 import BeautifulSoup
from StringIO import StringIO
import json, timeit
from CaptchaParser import CaptchaParser
import HTMLParser

br= mechanize.Browser()
br.set_handle_equiv(True)
br.set_handle_redirect(True)
br.set_handle_referer(True)
br.set_handle_robots(False)

print "Fetching Captcha"

r=br.open('https://vtop.vit.ac.in/student/')
html=r.read()
soup=BeautifulSoup(html,"html.parser")
im = soup.find('img', id='imgCaptcha')
image_response = br.open_novisit(im['src'])
img=Image.open(StringIO(image_response.read()))
imgcpy=img.copy()
starttime = timeit.default_timer()
parser=CaptchaParser()
captcha=parser.getCaptcha(img)
stoptime = timeit.default_timer()

print "Recognized Captcha:"+str(captcha)+" in "+str(stoptime-starttime)

br.select_form('stud_login')
regno=raw_input("Enter your username : ")
dob=raw_input("Enter your password : ")
br.form['regno']=regno
br.form['passwd'] = dob
br.form['vrfcd']=str(captcha)


print "Logging in User:"+str(regno)

response=br.submit()

if(response.geturl()=="https://vtop.vit.ac.in/student/home.asp"):
	print"Success!"

else:
	print "Failed :("
	print "The Username or Password is incorrect"
p=response.read()
a=br.open("https://vtop.vit.ac.in/student/stud_home.asp")
url=a.read()
sou=BeautifulSoup(url,"html.parser")
name=sou.find_all('td',{"class":'chart1_barcell'})
print im
for i in name:
        print i
        
#br.follow_link(text='Logout')

