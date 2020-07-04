# Presence-Detector
We make a presence detector. We choose two options, with [PIR](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#ir-arduino) and [Computer Vision](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#computer-vision)

# Computer Vision

## Index



- [Components and Software](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#components-and-software)
- [Budget](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#budget)
- [Installation OpenCV](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#installation-opencv)
- [Code](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#code)
- [Test 1 - video test 1](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#test-1---video-test-1)
- [Test 2 - video test 2](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#test-2---video-test-2)
- [Test 3 - Real Time](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#test-3---real-time)
- [Bibliography](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#bibliography)



## Components and Software

- Raspberry Pi 3B (with raspbian) [buy on Amazon](https://www.amazon.es/Raspberry-Pi-Modelo-Quad-Core-Cortex-A53/dp/B01CD5VC92/ref=sr_1_4?__mk_es_ES=ÅMÅŽÕÑ&dchild=1&keywords=raspberry+pi+3+b%2B&qid=1593767195&sr=8-4)
- Camera B01 [buy on Amazon](https://www.amazon.es/LABISTS-Oficial-Raspberry-Soporte-Nocturna/dp/B07TXGGJMT/ref=sr_1_1_sspa?__mk_es_ES=ÅMÅŽÕÑ&crid=3ENFQZ2F7R7VB&dchild=1&keywords=camara+raspberry+pi+3&qid=1593767375&sprefix=camara+ras%2Caps%2C226&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyWE1BRFQxUElOSDNTJmVuY3J5cHRlZElkPUEwNjczODM0MUdDNUdYQ0VBT0kwQyZlbmNyeXB0ZWRBZElkPUEwOTE2MzA0VlZKSFdWSFhLM1Y4JndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)
- OpenCV



## Budget

![alt text](https://github.com/Los-Carlos/Presence-Detector/blob/master/CV_Counter_People/budget.png)

Total Price: 37,43 + 13,99 = **51,42 €**

## Installation OpenCV

First update and upgrade rpi

````javascript
sudo apt-get update
sudo apt-get upgrade
````

Installing libraries and opencv

````javascript
sudo apt-get install libhdf5-dev libhdf5-serial-dev libhdf5-100
sudo apt-get install libqtgui4 libqtwebkit4 libqt4-test
sudo apt-get install libatlas-base-dev
sudo apt-get install libjasper-dev
wget https://bootstrap.pypa.io/get-pip.py
sudo python3 get-pip.py
sudo pip3 install opencv-contrib-python==3.4.6.27 //This is the last version that opencv works in rpi
````



## Code

We programing the Person.py class and use it in the code Counting.py

**Files: **

 [Counting.py](https://github.com/Los-Carlos/Presence-Detector/blob/master/CV_Counter_People/Counting.py)  [Person.py](https://github.com/Los-Carlos/Presence-Detector/blob/master/CV_Counter_People/Person.py) 

Problem with function, return 2 parameters and i need 3: 

````javascript
cv.findContours(mask2,cv.RETR_EXTERNAL,cv.CHAIN_APPROX_SIMPLE)
````

**Solution**

````javascript
cv.findContours(mask2,cv.RETR_EXTERNAL,cv.CHAIN_APPROX_SIMPLE)[-2:] # I indicate to use the 3 parameter version
````





## Test 1 - video test 1

<video src=".\Videos\Video Test 1.mp4"></video>

https://drive.google.com/file/d/17YR9VLVqKBYCZtvM7wRCfyH88-kxJ0sK/view?usp=sharing

## Test 2 - video test 2

The video has different dimensions, so I have changed some lines of code. I have defined the height and width depending on the video automatically.

````javascript
h = cap.get(4) # height
w = cap.get(3) # width
````



<video src=".\Videos\Video Test 2.mp4"></video>

https://drive.google.com/file/d/1MMF_9WtRl3gLpOb8oAoFoBnUfD2wceaB/view?usp=sharing

## Test 3 - Real Time

Prueba real desde un balcón (FALTA VIDEO)



## Bibliography

Installation:

https://www.youtube.com/watch?v=xlmJsTeZL3w

Code:

https://github.com/Gupu25/PeopleCounter

Error Code: 

https://stackoverflow.com/questions/25504964/opencv-python-valueerror-too-many-values-to-unpack

Videos:

- Video Test 1: https://github.com/Gupu25/PeopleCounter
- Video Test 2: https://www.shutterstock.com/video/clip-5852792-top-down-view-london-city-workers-on


# IR Arduino

## Index
- [Components](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#index-1)
- [Budget](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#budget-1)
- [Code](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#code-1)
- [Circuit](https://github.com/Los-Carlos/Presence-Detector/blob/master/README.md#circuit)

## Components

- Arduino ONE 
- Infrared Sensor x2


## Budget

Total price = 6,68 + 1,51 = **8,19€**

## Code

Code: [Arduino Code](https://github.com/Los-Carlos/Presence-Detector/blob/master/IR_Counter_People/IR_Counter/IR_Counter.ino)
Proteus: [Proteus](https://github.com/Los-Carlos/Presence-Detector/blob/master/IR_Counter_People/IR_Counter_People.pdsprj)

## Circuit

[Circuit.pdf](https://github.com/Los-Carlos/Presence-Detector/blob/master/IR_Counter_People/Counter.pdf)
