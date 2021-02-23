/* Write a program that uses bit fields. The bit fields must be members 
of a structure and be of the following types: unsigned int and char. 
Set their size short int 3 bits, char 6 bits. 
struct <tagStruct> {
Ctype m_bitField: N;
CType2 m_bitField2: M;
};
Define a structure variable and initialize them with a value of 7 and ‘c’ respectively. 
Print the items. Also print the size of the structure. Add more members of the existing 
types and print the size of the structure again. Rearrange them as a sequence, to be 
char, char, short int, short int. How does the size of the structure change?
Try the same with the #pragma pack preprocessor (1). */


/* Имах проблеми със битовите полета, когато сложа тип char, потърсих информация и
излезе, че в битовите полета в С мога да използвам само типове int, signed int или unsigned int.
Не мога да намеря начин да реша задачата като имам char в битово поле */
