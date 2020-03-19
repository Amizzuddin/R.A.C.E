#Problem 37: Write a program to print each line of a file in reverse order

import sys

def readfile(filename):
    return open(filename).readlines()

def splitting(lists):
    for i in range(len(lists)):
        lists[i] = lists[i].strip('\n')   #remove the newline character from each line
        lists[i] = lists[i].split(' ')    #split the sentence in each line to form another list (2D array)
    return lists

def line_reverse(lists):
    line_reversed = []
    for i in range(len(lists)):
        line_reversed.append([])          #create a 2D array in each list member
        for j in lists[i][::-1]:
            line_reversed[i].append(j)
    return line_reversed

def join_each_line(array):
    for i in range(len(array)):
        array[i] = ' '.join(array[i])
        array[i] += '\n'
    return array

if __name__ == "__main__":
    text = readfile(sys.argv[1])
    print(''.join(text))
    text = splitting(text)
    text = line_reverse(text)
    text = join_each_line(text)
    print(''.join(text))
