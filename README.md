Arduino Digitimer DS7A Controller

Enables triggering of two Digitimer DS7A Constant Current Stimulators. This has only been tested with a 5V Arduino Uno board.

The program uses pins 2 to 6 as outputs.
- 2 is set high to indicate power
- pins 3 and 4 are used to indicate which DS7As the Arduino is attempting to activate
- pins 5 and 6 are used to trigger the DS7As and should be connected through BNC connectors to the DS7As trigger terminal

pins 3 and 5 are assigned to the left or 1 DS7A
pins 4 and 6 are assigned to the right or 2 DS7A

The Arduino reads integers from the Serial connection. It responds to either 1 or 2, sending a signal to the associated DS7A.

