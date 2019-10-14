# Creating you own Muscle Controlled Robotic Finger

If you have ever wanted to get some experience in working with Robotics in a fun and interesting way, this mini project is a great way to get started. This Muscle controlled robotic finger will exposure you to the basics of 3D printing, robotic hand design, Arduinos, servos and the basics of biosignals, all interesting subjects on their own. In total the cost for putting one together can be as cheap at 100$-150$ depending on where you source your parts. The best part is that you can reuse the Arduino, servo  and myoware once you are done.

# What you will need
*	[1 Inmoov Finger Starter Kit](http://inmoov.fr/inmoov-stl-parts-viewer/?bodyparts=Finger-starter-kit)
*	[1 Servo](https://www.sparkfun.com/products/14760)
* [1 Arduino Uno](https://www.sparkfun.com/products/11021)
*	[1 Myoware device](https://www.sparkfun.com/products/13723)
* 2 Screws
*	[Electrodes](https://www.sparkfun.com/products/12969)
*	[Jumper Wires(M-M, M-F, F-F)](https://www.sparkfun.com/products/9194)
*	Laptop
*	[USB 2.0 Cable Type A/B](https://store.arduino.cc/usa/usb-2-0-cable-type-a-b)
* Fishing wire or similar wire.
* Super Glue or another adhesive

# Assembling your finger

## Step 1 Printing your finger index

Go to the Inmoov Finger starter kit website to find the STL files. If you don't have a 3D Printer, you can visit a fab lab or makerspace and get it done there. You can also do the printing online and have it shipped to you as well. There are many types of materials you can 3D print with with  PLA being the most popular and cheapest. If you decide to print online you can use a service like 3D Hubs. Some online 3D printing services will require you to separate the FingerIndexV4.stl file into the components. I will upload the files in this repo at a later date. For now you can use an online STL file editor like Tinker Cad to do it.

**Resources**
* [Inmoov\ finger kit STL files](http://inmoov.fr/inmoov-stl-parts-viewer/?bodyparts=Finger-starter-kit)
* [List of Fab Labs across the world](https://www.fablabs.io/labs)
* [Online 3D printing service](https://www.3dhubs.com/3d-printing/)


## Step 2: Assemble your finger

Putting together the finger is a relatively simple process and you don't need to necessarily follow the method done on the [InMoov website](http://inmoov.fr/finger-starter/). Here is a simplified assembly process.

* Glue Pieces 1 and 2 together. Make sure to glue them where the numbers are on the same side
* Glue Pieces 3 and 4 together. Make sure to glue them where the numbers are on the same side
* Take your fishing wire and run it from the upper hole of Piece 5 to upper hole of  Piece 1
* Take your fishing wire and run it from the lower hole of Piece 5 to lower hole of Piece 1
* Take the two strings at Piece 5 and tie them together

You can now assemble the pieces together attach Pieces 1+2 to 3+4 and make sure that the numbers are at the bottom and not top. Use a toothpick or stick like material to attach the two components together. Do the same with piece 3+4 to 5. Finally attach Piece 6 to Piece 5.


## Step 3: Attach to the Servo

You will then need to attach the string to the servo motor. You will first need to attach the roboRing 3d part to the servo. Before doing so, make sure to orientate your servo so that it is at the 90 degree starting point. In order to properly orientate it, first rotate it clockwise until you no longer can. Then take one the attachments like seen below and use it to rotate it 90 degrees. Once it's properly orientated, make sure to have the hole orientated in the direction of the finger. Take two screws and put them into the upper and lower hole. Finally take the wires and attach the upper string to the upper screw and the lower string to the lower screw. Make sure to run the wires through the small little hole before attaching them to the screw.


It's important that there is no Slack in the wire or it will not work well!
## Step 4: Attach to arduino

Attach the Servo to your Arduino. You will want to run the brown wire to the ground, the red wire to 5V (volts), and orange to whatever digital pin you want to run your Arduino code from. In my case, it was D6.

You will also need to attach you Myoware to the arduino as well. In our case, we attached + to 3.3 V, - to ground and sig to whichever analog pin. In our case it was A0

## Step 5: Placing the Myoware on your body

If not done properly, placing the Myoware can be a bit tricky. I could try to explain it, however my suggestion is to take a look at [this video instead](https://www.youtube.com/watch?v=TW4uw5EmYKQ)

**Resources to work with EMG and Myoware**
* [Techniques to do EMG analysis](https://www.ncbi.nlm.nih.gov/pmc/articles/PMC1455479/)

## Step 6: Upload your code!

Take the code from the repo and upload it to your Arduino and it should work! I would suggest messing  with the servo placement and threshold value to get the best experience.
