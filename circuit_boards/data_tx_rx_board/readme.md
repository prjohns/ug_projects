# Board for isolated 1-way communications

## Board Details:

This board should contain the following:
-  slots for 2 microcontrollers, isolated from each other
-  2 resistors, for pull up/down of the phototransistor/led for transmission
-  1 phototransistor, attached to the RX side*
-  1 LED, attached to the TX side*

*this is a single module, with a fibre between the LED and phototransistor.

### Other notes:
On this board, the 2 microcontrollers should be on completely separate ground planes, and should have no electrical connections between them.

### Optional Board details

The board could contain room for another pair of resistors and a second LED->phototransistor, for enabling a 2-way version of the board, which could be useful for controlling things on floated platforms.

## Board Utility:

The 1-way mode of this board is currently used to safely transfer data from the internal CUEBIT network to the external campus network. 

The Optional 2-way version of this board would be useful for transferring data to devices on floated platforms, and could potentially be used for computer control of things such as floated cathode supplies.

## Things to buy for project

-  Microcontroller, costs ~$5-10, cheaper from manufacturer, but also on Amazon
-  header slots for Microcontroller, cheap, 100s for few $
-  Board printing, often also ~$10, varies based on quality
-  2-4 resistors, cheap, as quality is mostly irrelevant here
-  1-2 isolated sensors, $6-7 each on mouser (828-OPI1280-032)