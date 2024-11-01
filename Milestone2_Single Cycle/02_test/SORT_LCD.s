addi x11, x0, 0x450
addi x11, x11, 0x450
addi x12, x0, 0x480
addi x12, x12, 0x480
addi x19, x0, 0x1
addi x20, x0, 0x7ff
addi x21, x0, 0x7f0
addi x22, x0, 0x70f
slli x23, x20, 12
ori x23, x23, 0x0ff
slli x24, x20, 1
addi x31, x0, 1
#----------------------------------------------------Khởi tạo LCD ban đầu-------------------------------------------------
InitLCD: 
    addi x17, x0, 0x38
    slli x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 0x0e
    slli x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 0x06
    slli x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 0x01
    slli x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 0x80
    slli x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 'L'
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, '1'
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, ':'
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 0xC0
    slli x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, 'L'
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, '2'
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
    addi x17, x0, ':'
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD #Nhận giá trị x17
#---------------------------------------------------Get the array element--------------------------------------------------
reset:
    addi x3, x0, 0
    #Truyền number 01-initial
    lw x4, 0(x12) #Giao tiếp với SW
    andi x5, x4, 0x000f
    sw x5, 0(x3)
    addi x7, x5, 0
    jal x1, ConvertBCD8bit #Nhận giá trị x7
    addi x17, x0, 0x84
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    addi x3, x0, 0
    #Truyền number 02-initial
    srli x5, x4, 4
    andi x5, x5, 0x000f
    sw x5, 4(x3)
    addi x7, x5, 0
    jal x1, ConvertBCD8bit #Nhận giá trị x7
    addi x17, x0, 0x87
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    addi x3, x0, 0
    #Truyền number 03-initial
    srli x5, x4, 8
    andi x5, x5, 0x000f
    sw x5, 8(x3)
    addi x7, x5, 0
    jal x1, ConvertBCD8bit #Nhận giá trị x7
    addi x17, x0, 0x8A
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    addi x3, x0, 0
    #Truyền number 04-initial
    srli x5, x4, 12
    andi x5, x5, 0x000f
    sw x5, 12(x3)
    addi x7, x5, 0
    jal x1, ConvertBCD8bit #Nhận giá trị x7
    addi x17, x0, 0x8D
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    #Check liệu đã start to implement chưa ?
    lb x4, 2(x12)
    andi x4, x4, 0x001
    bne x4, x31, reset
    #Thực hiện bubble sort
bubble_sort:
    addi x2, x0, 0
    addi x3, x0, 0
    addi x15, x0, 4
    # x3 = địa chỉ mảng, x15 = số lượng phần tử
    add x14, zero, x15 # x14 = số lượng phần tử
    add x29, zero, zero # x29 = i
outer_loop:
    addi x28, zero, 1 # x28 = j
    addi x14, x14, -1
    add x3, zero, zero
inner_loop:
    bgt x28, x14, end_outer # Nếu j > số lượng phần tử, kết thúc vòng lặp ngoài
    lw x27, 0(x3) # x27 = mảng[j]
    lw x26, 4(x3) # x26 = mảng[j+1]
    ble x27, x26, continue_inner # Nếu mảng[j] <= mảng[j+1], tiếp tục vòng lặp trong
    sw x27, 4(x3) # Hoán đổi mảng[j] và mảng[j+1]
    sw x26, 0(x3)
continue_inner:
    addi x28, x28, 1 # j++
    addi x3, x3, 4 # x3 = &mảng[j+1]
    j inner_loop
end_outer:
    beqz x14, end_sort # kết thúc sắp xếp
    j outer_loop
end_sort:
    # Load dữ liệu vào Register File từ 
    li x3, 0
    lw x25, 0(x3)
    lw x26, 4(x3)
    lw x27, 8(x3)
    lw x28, 12(x3)
    #Truyền number 01-sorted
    addi x7, x25, 0
    jal x1, ConvertBCD8bit
    addi x17, x0, 0xC4
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    #Truyền number 02-sorted
    addi x7, x26, 0
    jal x1, ConvertBCD8bit
    addi x17, x0, 0xC7
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    #Truyền number 03-sorted
    addi x7, x27, 0
    jal x1, ConvertBCD8bit
    addi x17, x0, 0xCA
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    #Truyền number 04-sorted
    addi x7, x28, 0
    jal x1, ConvertBCD8bit
    addi x17, x0, 0xCD
    slli x17, x17, 2
    jal x1, transferLCD
    jal x1, Trans2Number
    jal x0, end #End the program
    #Transfer LCD funtion
transferLCD: /*
    sw x17, 0(x11)
    addi x15, x0, 0
    addi x18, x0, 166 
    addi x19, x0, 1
    loop_riseE_2:addi x15, x0, 1000
    loop_riseE:sub x15, x15, x19
    bge x15, x0, loop_riseE
    sub x18, x18, x19
    bge x18, x0, loop_riseE_2
    ori x17, x17, 1
    sw x17, 0(x11)
    addi x18, x0, 966
    loop_steadyE_2:addi x15, x0, 1000
    loop_steadyE:sub x15, x15, x19
    bge x15, x0, loop_steadyE
    sub x18, x18, x19
    bge x18, x0, loop_steadyE_2
    and x17, x17, x24 
    sw x17, 0(x11)
    addi x18, x0, 50
    loop_fallE_2:addi x15, x0, 1000
    loop_fallE:sub x15, x15, x19
    bge x15, x0, loop_fallE
    sub x18, x18, x19
    bge x18, x0, loop_fallE_2*/
    jalr x0, x1, 0
    #Convert BCD to 8bit function
ConvertBCD8bit:/*
    slli x7, x7, 24
    addi x15, x0, 5
    addi x18, x0, 8
    addi x19, x0, 1
    addi x16, x0, 0
    andi x17, x0, 0
loop_shift:
    blt x7, x0, shift_1
shift_0: 
    slli x16, x16, 1
    jal x0, compare
shift_1:
    slli x16, x16, 1
    ori x16, x16, 1
compare: 
    beq x18, x19, Endconvert
    andi x17, x16, 0x00f
    blt x17, x15, compare_1
    addi x17, x17, 3
    andi x17, x17, 0x00f
    and x16, x16, x21
    or x16, x16, x17
compare_1:
    srli x17, x16, 4
    andi x17, x17, 0x00f
    blt x17, x15, compare_2
    addi x17, x17, 3
    andi x17, x17, 0x00f
    slli x17, x17, 4
    and x16, x16, x22
    or x16, x16, x17
compare_2:
    srli x17, x16, 8
    andi x17, x17, 0x00f
    blt x17, x15, finish_compare
    addi x17, x17, 3
    andi x17, x17, 0x00f
    slli x17, x17, 8
    and x16, x16, x23
    or x16, x16, x17
finish_compare:
    sub x18, x18, x19
    slli x7, x7, 1
    jal x0, loop_shift*/
Endconvert: 
    jalr x0, x1, 0
Trans2Number:/*
    #Transfer 2 number
    srli x17, x16, 4
    addi x2, x1, 0
    andi x17, x17, 0x0f
    addi x17, x17, 48
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD
    srli x17, x16, 0
    andi x17, x17, 0x0f
    addi x17, x17, 48
    slli x17, x17, 2
    ori x17, x17, 2
    jal x1, transferLCD
    addi x1, x2, 0*/
    jalr x0, x1, 0
end:
    jal x0, end

