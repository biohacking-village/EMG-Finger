# Creating you own Muscle Controlled Robotic Finger

If you have ever wanted to get some experience in working with Robotics in a fun and interesting way, this mini project is a great way to get started. This Muscle controlled robotic finger will exposure you to the basics of 3D printing, robotic hand design, arduinos, servos and the basics of biosignals, all interesting subjects on their own. In total the cost for putting one together can be as cheap at 100$-150$ depending on where you source your parts. The best part is that you can reuse the Arduino and servo  and myoware once you are done. 

What you will need
*	[1 Inmoov Finger Starter Kit](http://inmoov.fr/inmoov-stl-parts-viewer/?bodyparts=Finger-starter-kit)
*	[1 Servo](https://www.sparkfun.com/products/14760)
* [1 Arduino Uno](https://www.sparkfun.com/products/11021)
*	[1 Myoware device](https://www.sparkfun.com/products/13723)
*	[Electrodes](https://www.sparkfun.com/products/12969)
*	[Jumper Wires(M-M, M-F, F-F)](https://www.sparkfun.com/products/9194) 
*	Laptop
*	[USB 2.0 Cable Type A/B](https://store.arduino.cc/usa/usb-2-0-cable-type-a-b)
* Fishing wire or similar wire.
* Super Glue or another adhesive

# Assembling your finger

## Step 1 Printing your finger index

Head to Inmoov Finger starter kit website to find the STL files. If you don't have a 3D Printer, you can visit  a fab lab or makerspace and get it done there. You can also do the printing online and have it shipper to you as well. Printing with PLA material tends to be the cheapest, however feel free to use any plastic you prefer. If you decide to print online and decide to use 3D hubes, they will ask for you to split each compontent in the get it shipped, 3D hub will ask for you to separate the FingerIndexV4.stl file into the separete components. 

**Resources**
* [Inmoov finger kit STL files](http://inmoov.fr/inmoov-stl-parts-viewer/?bodyparts=Finger-starter-kit)
* [List of Fab Labs accross the world](https://www.fablabs.io/labs)
* [Online 3D printing service](https://www.3dhubs.com/3d-printing/)


## Step 2: Assemble your finger

Putting together the finger is a relatively simple process and the need to follow the method done on the inmoov website, is not neccessary. However certains part of the assembly are critical

* Glue Pieces 1 and 2 together. Make sure to glue them where the numbers are on the same side
* Glue Pieces 3 and 4 together. Make sure to glue them where the numbers are on the same side
* Take your fishing wire and run it from the upper hole of Piece 5 to upper hole of  Piece 1
* Take your fishing wire and run it from the lower hole of Piece 5 to lower hole of Piece 1

**Resources**

## Step 3: Attach to the Servo 

You will then need to attach the string to the servo motor. You will first need to attach the roboring 3d part to the servo. Before doing so, make sure to orientate your servo so that it is at the 90 degree starting point. In order to properly orientate it, first rotate it clockwise until you no longer can. Then take one the attachments like seen below and use it to rotate it 90 degrees. Once it's properly orientated, make sure to have the hole orientatted in the direction of the finger. Take two screws and put them into the upper and lower hole.

## Step 4: Attach to arduino 

Attach the Servo to your arduno. You will want to run the brown wire to the ground, the red wire to to 5 V(volts) , and orange to whatever digital pin you want to run your arduino code from. In my case, it was D6

You will also need to attach you Myoware to the arduino as well. In our case, we attached + to 3.3 V, - to ground and sig to whichever analog pin. In our case it was A0
