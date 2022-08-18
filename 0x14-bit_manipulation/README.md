# 0x14-bit_manipulation
## 0-binary_to_uint.c
### a function that converts a binary number to an unsigned int
	* Prototype: unsigned int binary_to_uint(const char *b);
	* where b is pointing to a string of 0 and 1 chars
	* Return: the converted number, or 0 if
	* there is one or more chars in the string b that is not 0 or 1
	* b is NULL

## 1-print_binary.c
### a function that prints the binary representation of a number
	* Prototype: void print_binary(unsigned long int n);
	* Format: see example
	* You are not allowed to use arrays
	* You are not allowed to use malloc
	* You are not allowed to use the % or / operators

## 2-get_bit.c
### a function that returns the value of a bit at a given index
	* Prototype: int get_bit(unsigned long int n, unsigned int index);
	* where index is the index, starting from 0 of the bit you want to get
	* Returns: the value of the bit at index index or -1 if an error occured

## 3-set_bit.c
### a function that sets the value of a bit to 1 at a given index
	* Prototype: int set_bit(unsigned long int *n, unsigned int index);
	* where index is the index, starting from 0 of the bit you want to set
	* Returns: 1 if it worked, or -1 if an error occurred

## 4-clear_bit.c
### a function that sets the value of a bit to 0 at a given index
	* Prototype: int clear_bit(unsigned long int *n, unsigned int index);
	* where index is the index, starting from 0 of the bit you want to set
	* Returns: 1 if it worked, or -1 if an error occurred

## 5-flip_bits.c
### a function that returns the number of bits you would need to flip to get from one number to another
	* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	* You are not allowed to use the % or / operators

## 100-get_endianness.c
### a function that checks the endianness
	* Prototype: int get_endianness(void);
	* Returns: 0 if big endian, 1 if little endian

## 101-password
### Find the password for this program
	* Save the password in the file 101-password
	* Your file should contain the exact password, no new line, no extra space
