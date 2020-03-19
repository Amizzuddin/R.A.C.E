#Problem 41: The wrap.py is not so nice because it is breaking the line at middle of any word. 
#Can you write a new program wordwrap.py that works like wrap.py, but breaks the line only at the word boundaries?
#$ python wordwrap.py she.txt 30 
#I'm sure that the shells are 
#seashore shells. 
#So if she sells seashells on 
#the seashore, 
#The shells that she sells are 
#seashells I'm sure. 
#She sells seashells on the 
#seashore;

import sys
from reverse import reverse_line_seq

def isEndWord(text, next_start_pointer, end_pointer):
    while(text[end_pointer].isalpha()):
        if(text[end_pointer+1].isalpha()):
            end_pointer -= 1
            next_start_pointer += 1
        else:
            break
    return next_start_pointer, end_pointer

def word_wrapping(text, length):
    printlen = int(length)
    wordwrap_text = []
    for i in range(len(text)):
        lenofline = len(text[i])
        text[i] = text[i].replace('\n', ' ')
        #print(text[i])
        nextstart = 0
        for j in range(0, lenofline, printlen):
            j = j - nextstart
            end = (lenofline, printlen) [lenofline > j+printlen]
            nextstart, end = isEndWord(text[i], j, end-1) #arrays/list index starts at 0!
            wordwrap_text.append(text[i][j:end])
    return wordwrap_text

if __name__ == "__main__":
    readfile = open(sys.argv[1]).readlines()
    readfile = reverse_line_seq(readfile)
    readfile = word_wrapping(readfile, sys.argv[2])
    print('\n'.join(readfile))