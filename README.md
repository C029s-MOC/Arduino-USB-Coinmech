# Arduino-USB-Coinmech
This is an Arduino Sketch intended for ArcadePC use that converts coin signal from a digital arcade coin mechanism to key inputs via USB

This is also my FIRST commit!

Default key is the F16 key, for your additional safety.

If you need to adjust the output key, make sure you check the link below! 

(they are different from the Virtual Key Code from Microsoft)

https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/

--- --- ---

HARDWARE REQUIREMENTS:

1:The coin mechanism you purchase MUST HAVE an NC digital output (typically the COIN wire and a NO/NC switch)

2:The board you purchase MUST BE 32u4 and SAMD based boards (Leonardo, Esplora, Zero, Due and MKR Family)

--- --- ---

SOFTWARE REQUIRMENTS:

1:Your ArcadePC game must have a key input for the coin mechanism, if this input cannot be customized, adjust the key used in the sketch instead

--- --- ---

HOW TO BUILD:

1:Connect the COIN wire to the coinmech pin (2 by default)

2:Cut the wire from the GND pin into your power supply's Negative wire and the Negative pin in the coin mechanism

3:Test and tailor your coin experience by adjusting the threshold entry and the key used for your signal output

You're now good to go!

--- --- ---

IMPROVEMENTS AND CUSTOMIZATIONS:

1:You should consider a standalone coin box if you are using just the controllers for your game and not the actual cabinet

2:For those who owns a cabinet, using the coin mechanism included in the cabinet is typically fine

3:For those who is planning to build a cabinet, having the coin box in the right position is the key to a nice-looking build

4:The board can be safely hung inside the coin box with just the wires because they're small

5:For software improments, please be open-source, thank you
