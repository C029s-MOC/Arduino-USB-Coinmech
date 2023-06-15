# Arduino-USB-Coinmech
This is an Arduino Sketch intended for ArcadePC use that converts coin signal from a digital arcade coin mechanism to key inputs via USB

This is also my FIRST commit!

**Download the latest file from Releases tab**

Default key is the F16 key, for your additional safety.

If you need to adjust the output key, make sure you check the link below! 

(they are different from the Virtual Key Code from Microsoft)

https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/

--- --- ---

HARDWARE REQUIREMENTS:

1:The coin mechanism you purchase MUST HAVE an NC digital output (typically the COIN wire and a NO/NC switch)

OR:Hook a key or mechanical switch to your board, find a way to power it, this should also work.

2:The board you purchase MUST BE 32u4 and SAMD based boards (Leonardo, Esplora, Zero, Due and MKR Family)

--- --- ---

SOFTWARE REQUIRMENTS:

1:Your ArcadePC game must have a key input for the coin mechanism, if this input cannot be customized, adjust the key used in the sketch instead

2:If your game does not pick up your signal (board LED lights up but no coin input), adjust the keypress duration, usually you need to INCREASE the duration.

--- --- ---

HOW TO BUILD:

1:Connect the COIN wire to the coinmech pin (2 by default)

2:Cut the wire from the GND pin, combine these together:

--your power supply's Negative wire
  
--the Negative pin in the coin mechanism
  
--GND pin wire

3:Test and tailor your coin experience by adjusting the threshold entry and the key used for your signal output

(only if you're using the first release, later releases DOES NOT react to threshold value anymore)

You're now good to go!

--- --- ---

IMPROVEMENTS AND CUSTOMIZATIONS:

1:You should consider a standalone coin box if you are using just the controllers for your game and not the actual cabinet

2:For those who owns a cabinet and has replaced internals with home PC / lost IO boards, using the coin mechanism included in the cabinet is typically fine

3:For those who is planning to build a cabinet, having the coin box in the right position is the key to a nice-looking build

4:The board can be safely hung inside the coin box with just the wires because they're small.

4-1:But once tested, you should wrap the board with electrical tape to prevent shortage.

5:For software improvements, please be open-source, thank you
