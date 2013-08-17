
# Geeky Theory - www.geekytheory.com

import serial
import time

arduino=serial.Serial('/dev/ttyACM0',baudrate=9600, timeout = 3.0)
arduino.open()
txt=''

while True:
	var = raw_input("Introducir un Comando: ")
	arduino.write(var);
	time.sleep(0.1)	
	while arduino.inWaiting() > 0:
		txt += arduino.read(1)
	print txt
	txt = ''
arduino.close()

