# ArcadeCube
Cours système intelligent - Henallux

# Introduction

If you want to build an arcade console with simple components as Raspberry and Arduino, you are in the right project. ArcadeCube combines all these components to build an intelligent arcade console. 

At the end of the project, the arcade console will play, for example, Super Mario Bros 3. The sides of the box will have LEDs that will light up according to the intensity of the game's music. The camera, at a certain height, will detect the number of fingers. For example, three raised fingers will put the game on hold.

# The list of components required to build the ArcadeCube

- 2x Raspberry Pi 3 Kit
- 1x Arduino 
- 1x Joysticks kit: Quimat - QR03-UK
- 1x HDMI Cable or HDMI/VGA adapter 
- 2m² of wood (15mm thickness) to build the console
- 1x packet of screws
- 1x Multi-socket
- 1x sound sensor: DFRobot - DFR0034
- 1x PC monitor with loud speaker
- 1x packet of connection cables (Male-Male)
- 1x packet of resistor (370 Ohm; 450 Ohm)
- 1x packet of LEDs
- 3x Transistor Mosfet
- 2x Breadboard
- 1x Micro card SD (min 16Gb)
- 1x Camera Pi v2 Raspberry

# How to install Retropie on Raspberry

The first step is to download the Retropie software on the Retropie website.

![Retropie Installation](ReadMe%20Image/1.png)

However, the soft only can’t play games. 
You will have to downloads ROM of games because Retropie work like a virtual machine who emulates old consoles.
That’s why you will need to download the games on those consoles if you want to play them.

After that, you will have to install the Retropie image on a micro-sd card. The first step is to format the card with “SD card Formatter”, then you can install the image with “Win32DiskImager”.

![Format](ReadMe%20Image/2.png) ![Win32DiskImager](ReadMe%20Image/3.png)

Now you can put the sd card in te Raspberry again and you can begin the buttons configuration.

![Retropie](ReadMe%20Image/4.jpg)

If you save buttons, we recommand you to mark the names on a tape to remember them and to note treir name on the encoder.

![Retropie on Raspberry](ReadMe%20Image/5.jpg)

However, as soon as we have one encoder with 2 sets of buttons (because it is planned for two players) we will have to edit the equipement so that the encoder knows there are two sets of buttons.

Here are the 5 steps :
1. In the Retropie menu, execute file manager
2. Go to :     → /pi       → /..      → /boot
3. Edit the file « CMDLine.txt » with button « F4 » then press « 2 »
4. At the end of the code, add this code: « USBhid.quirks=0x0810 :0xe001 :0x00000040 »
5. Confirm by pressing those buttons: « CTRL+0 » → « enter » → « F10 »

Here is our wiring plan of the buttons on the encoder:

![Configuration](ReadMe%20Image/6.PNG)

# How to configure a Raspberry with fingers recognition 

When u get the raspberry, u can take off the micro card SD. With your computer, you need to install on the new card SD (16Gb) Raspbian OS. On the following link, u can download the last version of Raspbian.

https://www.raspberrypi.org/downloads/raspbian/

After downloading the zip file, u need to use Win32 Disk Imager to install the file on the Card. U can format the card, put the image file on the software and click on the “Write” button. This is the same process than installing Retropie on Raspberry. If you have some problems to install, you can look on the following tutorial.

https://www.raspberrypi.org/documentation/installation/installing-images/README.md

When the card is ready, u can put it on the Raspberry. Start it and wait the initialization. To use the python file, we need to install libraries. First, follow the instructions on the following link to install OpenCv 4.

https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/

Then u need to install Imutils, Numpy ans Scikit-learn. U can easily install these libraries with using in the Raspberry Prompt: “pip install NameOfLibrairie “. 

Before using the file, don’t forget to put the camera on the Raspberry. U can use the following link to set the camera:

https://www.raspberrypi.org/documentation/configuration/camera.md

To use our file, u need to download it on our Github, and call it with python 3 on the Raspberry Prompt. Don’t forget to go in the folder where you downloaded it and also activate OpenCv 4. 

If you did the tutorial to install OpenCv 4, the command to activate it is:
-	$ source ~/.profile
-	$ workon cv

The programme will turn on after calling on the Prompt. If you get any error, u can close everything and continue the tutorial. 

# How to configure your Arduino

1. Download our Arduino code on Github
2. Transfer the code into an Arduino Uno like (it can also work with other type of Arduinos)
3. If you have an Arduino Uno, don’t forget to place resistors (380 Ohm) in serial with the leds on the pins 7 to 13


