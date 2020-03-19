# Problem 40: Write a program wrap.py that takes filename and width as aruguments and wraps the lines longer than width.
# Example:
# $ python wrap.py she.txt 30 
# I'm sure that the shells are s 
# eashore shells. 
# So if she sells seashells on t 
# he seashore, 
# The shells that she sells are 
# seashells I'm sure. 
# She sells seashells on the sea 
# shore;

import sys
from reverse import reverse_line_seq

def wrapping(text , length):
    wrap_text = []
    printlen = int(length)
    for i in range(len(text)) : #for loop to point the filaname array (this example 4 lines)
        lenofline = len(text[i])
        text[i] = text[i].strip('\n')
        for j in range(0, lenofline, printlen) : #for loop to point the members in each line
            x = (lenofline, printlen) [lenofline > j+printlen] #ternary operator
            wrap_text.append(text[i][j:x])
    return wrap_text

if __name__ == "__main__": #only execute this function if file is run but not imported
    readtext = open(sys.argv[1]).readlines()
    readtext = reverse_line_seq(readtext)
    readtext = wrapping(readtext , sys.argv[2])
    print('\n'.join(readtext))
