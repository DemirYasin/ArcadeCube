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
![Install retropie](https://user-images.githubusercontent.com/48061476/57983941-33b8c000-7a57-11e9-86da-092680848a88.png)
However, the soft only can’t play games. 
You will have to downloads ROM of games because Retropie work like a virtual machine who emulates old consoles.
That’s why you will need to download the games on those consoles if you want to play them.

After that, you will have to install the Retropie image on a micro-sd card. The first step is to format the card with “SD card Formatter”, then you can install the image with “Win32DiskImager”.

Now you can put the sd card in te Raspberry again and you can begin the buttons configuration.

If you save buttons, we recommand you to mark the names on a tape to remember them and to note treir name on the encoder.

However, as soon as we have one encoder with 2 sets of buttons (because it is planned for two players) we will have to edit the equipement so that the encoder knows there are two sets of buttons.

Here are the 5 steps :
1. In the Retropie menu, execute file manager
2. Go to :     → /pi       → /..      → /boot
3. Edit the file « CMDLine.txt » with button « F4 » then press « 2 »
4. At the end of the code, add this code: « USBhid.quirks=0x0810 :0xe001 :0x00000040 »
5. Confirm by pressing those buttons: « CTRL+0 » → « enter » → « F10 »

Here is our wiring plan of the buttons on the encoder:
