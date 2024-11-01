# Application 
	# x10 to store the address for sw register 0x900
addi x10 x0 0x7ff
addi x10 x10 0x101
	# x15 to store the address for HEX register start from 0x800
addi x16 x0 0x7ff
	# Load the sw value into the register x1
lw x1 0x0(x10)

addi x2 x0 10 		# parameter HEX1
addi x3 x0 100 		# parameter HEX2
addi x4 x0 1000 	# parameter HEX3
#store value 10000 into x5 
addi x5 x0 0				# Initial value 
addi x6 x0 5				# Counter 
LOOP_HEX4:  
	beq x6 x0 END_LOOP4
    addi x5 x5 2000
    addi x6 x6 -1
    jal x7 LOOP_HEX4

END_LOOP4:
addi x15 x0 0 # Clear register x15 (HEX4)
addi x14 x0 0 # Clear register x14 (HEX3)
addi x13 x0 0 # Clear register x13 (HEX2)
addi x12 x0 0 # Clear register x12 (HEX1)
addi x11 x0 0 # Clear register x11 (HEX0)

HEX4_LOOP:
blt x1 x5 HEX3_LOOP
sub x1 x1 x5
addi x15 x15 1 # Increase the thousands value HEX3 to 1 after each comparision
jal x7 HEX4_LOOP

HEX3_LOOP:
blt x1 x4 HEX2_LOOP
sub x1 x1 x4
addi x14 x14 1 # Increase the thousands value HEX3 to 1 after each comparision
jal x7 HEX3_LOOP

HEX2_LOOP:
blt x1 x3 HEX1_LOOP
sub x1 x1 x3
addi x13 x13 1 # Increase the hunreds value HEX3 to 1 after each comparision
jal x7 HEX2_LOOP

HEX1_LOOP:
blt x1 x2 HEX0_LOOP
sub x1 x1 x2
addi x12 x12 1 # Increase the tens value HEX3 to 1 after each comparision
jal x7 HEX1_LOOP

HEX0_LOOP:
add x11 x0 x1 

# Set the display value for HEX0 // 0x800
sw x11, 0x01(x16)
# Set the display value for HEX1 // 0x810
sw x12, 0x11(x16)
# Set the display value for HEX2 // 0x820
sw x13, 0x21(x16)
# Set the display value for HEX3 // 0x830
sw x14, 0x31(x16)
# Set the display value for HEX4 // 0x840
sw x15, 0x41(x16)