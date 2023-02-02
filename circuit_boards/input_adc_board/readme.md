# Board for reading voltages, and sending the output on USB

## Board Details:

This board should contain the following:
-  Slot for the microcontroller, nominally a Seeeduino XIAO or similar, with at least 4 12bit ADCs
-  Headers for connecting 4 leads to sensors, so 8 pins/sockets

### Optional Board details

The board could contain room for the rest of the analog inputs as well, for a total of 22 headers.

## Board Utility:

This board could be used as a generic ADC board. The Seeeduino XIAO has 11 12 bit ADCs, and can read them at around 60kHz, so you can get 5.5-60kHz of data returned, depending on how many ADCs you are reading.

Note that while it can read ADCs quickly, it cannot do maths as quickly.

### Results from testing ADC rate on one of the boards

These were obtained by using the code in `analog_rate_tests`

Active ADCs | Values Read in 1s
   ---      |     ---
    1       |    60000
    2       |    61200
    3       |    61800
    4       |    61840
    5       |    62000
    6       |    62000
    7       |    62000
    8       |    62060
    9       |    62200
    10      |    62200
    11      |    62260

reading at 10bit resolution instead of 12 gives about an extra 2k reads per second, as measured in the above table.

A more realistic measure is done with `analog_rate_tests_2`, which also includes timing for the loop and some integer addition operations.

Active ADCs | Values Read in 1s
   ---      |     ---
    1       |    43480
    2       |    45988
    3       |    46419
    4       |    46764
    5       |    47085
    6       |    47178
    7       |    47390
    8       |    47408
    9       |    47511
    10      |    47640
    11      |    47608

## Things to buy for project

-  Microcontroller, costs ~$5-10, cheaper from manufacturer, but also on Amazon
-  header slots for Microcontroller, cheap, 100s for few $
-  Board printing, often also ~$10, varies based on quality