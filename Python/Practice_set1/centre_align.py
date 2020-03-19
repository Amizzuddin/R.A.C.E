#Problem 42: Write a program center_align.py 
#to center align all lines in the given file.
#$ python center_align.py she.txt 
#  I'm sure that the shells are seashore shells.
#    So if she sells seashells on the seashore,
#The shells that she sells are seashells I'm sure. 
#       She sells seashells on the seashore;

import sys
from reverse import reverse_line_seq



if __name__ == "__main__":
    readfile = open(sys.argv[1]).readlines()
    readfile = reverse_line_seq(readfile)
    print(readfile)