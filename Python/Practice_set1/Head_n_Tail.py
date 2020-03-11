# Problem 38: Implement unix commands head and tail. 
# The head and tail commands take a file as argument and prints its first and last 10 lines of the file respectively.
# For windows users, you need to install BASH in order to run command "head" and "tail"
# syntax: head [option] [filename]...[filename]
# syntax: tail [option] [filename]...[filename]
# where [option] > '-n x' x number of times to print, '-q' !print file header, '-v' always print file header

import os
import sys

def print_unix(command, number_of_times, filename):
    instruction = [command, '-n ' + number_of_times, filename]
    instruction = ' '.join(instruction)
    os.system(instruction)

print_unix('head', '10', sys.argv[1])
print_unix('tail', '10', sys.argv[1])