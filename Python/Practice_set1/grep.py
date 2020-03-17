# Problem 39: Implement unix command grep. 
# The grep command takes a string and a file as arguments and prints all lines in the file which contain the specified string.
# For windows users, you need to install BASH in order to run command "head" and "tail"
# syntax: grep [options] pattern [files]
# Options Description
# -c : This prints only a count of the lines that match a pattern
# -h : Display the matched lines, but do not display the filenames.
# -i : Ignores, case for matching
# -l : Displays list of a filenames only.
# -n : Display the matched lines and their line numbers.
# -v : This prints out all the lines that do not matches the pattern
# -e exp : Specifies expression with this option. Can use multiple times.
# -f file : Takes patterns from file, one per line.
# -E : Treats pattern as an extended regular expression (ERE)
# -w : Match whole word
# -o : Print only the matched parts of a matching line, with each such part on a separate output line.

# Although os.system() works, it is not recommended as it is considered a bit old and deprecated.
# A more recommended solution is Python’s subprocess module call(args) function.
#import subprocess
import os
import sys

def grep_unix(command, option, filename):
    instruction = [command, '-w '+ option, filename]
    instruction = ' '.join(instruction)
    os.system(instruction)

grep_unix('grep', sys.argv[2] , sys.argv[1])