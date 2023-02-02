# Board for reading 4 thermistors and 4-16 thermocouples

## Board Details:

This board should contain the following:
-  Slot for 1 microcontroller
-  Slot for an ADS1115 4-channel 16 bit ADC
-  5 reference resistors
-  1 on-board thermistor for reference temperature
-  headers for 4 thermistors, so 8 pins there
-  headers for 4 thermocouples, so another 8 pins

### Optional Board Details

Slots for another 1-3 ADS1115 boards.

These boards can be configured for up to 4 on the same communication bus, thereby allowing up to 16 16 bit ADCs to be read. If done this way, they can be then used in differential mode, for reading up to 8 thermocouples, differential mode is more stable, and gives the full 16 bit precision instead of limited to 15 bit.

## Board Utility:

This board would act as a more complete thermal monitoring board from the cheaper 10 thermistor board. The thermocouple readers for this board could also be used for other low-voltage measurements which require 16 bit precision.

## Things to buy for project

-  Microcontroller, costs ~$5-10, cheaper from manufacturer, but also on Amazon
-  header slots for Microcontroller, cheap, 100s for few $
-  Board printing, often also ~$10, varies based on quality
-  5 reference resistors, ~$5-10 for good stability
-  4 external thermistors, can get $50 for $7 on Amazon
-  1 SMD thermistor ~$.5, unless using a through-hole one as above
-  High temperature cable/wire for thermistor hookups, prices vary, but usually ~$0.5-1 / ft
-  4-16 K-type thermocouple board headers, $5-10 each from Omega, might be cheaper elsewhere.
-  1-4 ADS1115 boards $5-15 each depending on quality of manufacturer, cheapest in sets of 3-4