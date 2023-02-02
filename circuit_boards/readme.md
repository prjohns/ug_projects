# Projects involving making a circuit board

## Notes:

Ideally these should be made in software like KiCAD, and then printed professionally. They can also be done by hand on prototyping board.

## Complexity ordering of these projects

1. `input_adc_board` - Very Easy - This is just a breakout for the microcontroller, commercial versions of this already exist.
2. `data_tx_rx_board` - Easy - The 1-way version of this board is only 3 additional components beyond the micro-controllers, and the 2 way modification is also quite easy once the 1-way is designed.
3. `10_thermistor_board` - Moderate - This one would include 10 surface mounted resistors, as well as the 20 pin headers, so can get finnicky trying to find room/arranging wires.
4. `thermistor_thermocouple_board` - Moderate - This includes 6 surface mount components, 5 reference resistors and a thermistor, it also then requires routing of signal wires for the ADS1115, which could get finnicky if extending to more than 1 ADS1115.

## Utility of these projects

All of these projects allow for data logging of the values read.

### `input_adc_board`
This is useful anywhere that can use "slow" 10-12 bit ADCs.

### `data_tx_rx_board`
This is useful for systems involving differing ground planes for equipment, such as floating platforms, or systems which require data isolation, such as the CUEBIT internal network.

### `10_thermistor_board`
This is useful for large systems which require temperature recorded at multiple locations, such as the CUEBIT, which presently monitors temperature at 10 external locations, and 5 internal locations.

### `thermistor_thermocouple_board`
This is useful for general ADC uses which require 16 bit ADCs, as well as for bake monitoring on large systems, or systems which use thermocouples.