# byte-calc
A simple project for calculating bytes required to store a number in c

# bit shifting
- 1000 in bin 1111101000

first right bit shift
- 63 in bin 0000111111

second right
- 31 in bin 0000011111 ...

zeros keep replacing the right most 1 until its 
- 0 in bin 000000000

at which the loop breaks 

# bites to bytes
round up bits 
- 1000 occupies 10 bits

- 10 / 8 = 1.25

- 1.25 round up 2

meaning 
1000 is stored in 2 bites of an unsigned int

# final thoughts 

never doing bit math again atleast for ints :)

