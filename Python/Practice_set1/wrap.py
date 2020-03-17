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

def wrapping(filename , length):
    text = open(filename).readlines()
    #print(len(text))
    #wrap_list = []
    for i in range(len(text)) : #for loop to point the filaname array (this example 4 lines)
        print('i loop:', i, 'total lenght on array:', len(text[i]))
        for j in range(0,len(text[i]), int(length)) : #for loop to point the members in each line
            print(j, text[i][j:int(length)]) #problem is the 2nd time to print from 30 till end it wont print
        #wrap_list.append([])
        #for j in range(len(text[i])) :
        #    wrap_list.append(text[i][j:j+int(length)])
        #    j = j+int(length)
        #    print(j, wrap_list)

wrapping(sys.argv[1] , sys.argv[2])