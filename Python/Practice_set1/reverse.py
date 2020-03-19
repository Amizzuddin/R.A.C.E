#To display she.txt in cmd, c:/(the file directory where txt file is saved)> type she.txt

#Problem 36: Write a program reverse.py to print lines of a file in reverse order.

import sys 

def readfile(filename):
    return open(filename).readlines()

def reverse_line_seq(lists):
    reverse_list = []
    for i in lists[::-1]:
        reverse_list.append(i)
    return reverse_list

if __name__ == "__main__":      #only execute this function if file is run but not imported
    text = readfile(sys.argv[1])
    text = reverse_line_seq(text)
    print(''.join(text))
