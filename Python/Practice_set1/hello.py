# This is helloworld program 
# run this as: 
#       python hello.py

print("Problem 2: Create a python script to print hello, world! four times.")
loop = 4
while loop > 0:
    print ("hello, World!")
    loop = loop - 1
print()

print("Problem 3:Create a python script with the following text and see the output.")
print("1 + 2")
print("output", 1+2, "\n")

print("Problem 4: What will be output of the following program.")
print("x = 4")
print("y = x + 1")
print("x = 2")
print("print x, y")
x = 4
y = x + 1
x = 2
print ("output:", x, y, "\n")

print("Problem 5: What will be the output of the following program.")
print("x, y = 2, 6")
print("x, y = y, x + 2")
print("print x, y")
x, y = 2, 6
x, y = y, x + 2
print("output", x , y, "\n")

print("Problem 6: What will be the output of the following program.")
print("a, b = 2, 3")
print("c, b = a, c + 1")
print("print a, b, c")
a, b= 2, 3
c = a
b = c + 1
print("output:", a, b, c, "\n")

print('''Problem 8: What will be the output of the following program?
x = 1 
def f():
    return x
print x 
print f()''')
x = 1
def f():
    return x
print("output:", x)
print("output:", f(), "\n")

print('''Problem 9: What will be the output of the following program?
x = 1 
def f(): 
    x = 2 
    return x
print x 
print f() 
print x''')
x = 1
def f():
    x = 2
    return x
print("output:", x)
print("output:", f())
print("output:", x, '\n')

print('''Problem 10: What will be the output of the following program?
x = 1 
def f():
    y = x 
    x = 2 
    return x + y
print x 
print f() 
print x''')
x = 1
def f():
    x = 2 #without this line the intreperter will prompt error
    y = x
    #x = 2
    return x + y
print("output:", '\n', 
x, '\n',
f(), '\n',
x, '\n')

print('''Problem 11: What will be the output of the following program?
x = 2 
def f(a): 
    x = a * a 
    return x
y = f(3) 
print x, y''')
x = 2
def f(a):
    x = a * a
    return x
y = f(3)
print("output:", x, y, '\n')

#note: learn more about lambda expression
print('''Problem 12: Write a function count_digits to find number of digits in the given number.
>>> count_digits(5) 
1
>>> count_digits(12345) 
5''')
def count_digits(x):
    count = 0
    while x >= 1:
        x = x / 10
        count = count + 1
    return count
print(count_digits(5))
print(count_digits(12345), '\n')

print('''Problem 13: Write a function istrcmp to compare two strings, ignoring the case.
>>> istrcmp('python', 'Python') 
True 
>>> istrcmp('LaTeX', 'Latex') 
True 
>>> istrcmp('a', 'b') 
False''')
def istrcmp(wordA, wordB):
    if wordA.upper() == wordB.upper():
        return True
    else:
        return False
print("output:")
print(istrcmp('python', 'Python'))
print(istrcmp('LaTeX', 'Latex'))
print(istrcmp('a', 'b'), '\n')

print('''Problem 14: What will be output of the following program?
print 2 < 3 and 3 > 1 
print 2 < 3 or 3 > 1 
print 2 < 3 or not 3 > 1 
print 2 < 3 and not 3 > 1''')
print('output:')
print (2 < 3 and 3 > 1)
print (2 < 3 or 3 > 1)
print (2 < 3 or not 3 > 1)
print (2 < 3 and not 3 > 1, '\n')

print('''Problem 15: What will be output of the following program?
x = 4 
y = 5 
p = x < y or x < z 
print p''')
x = 4 
y = 5
z = 1
p = x < y or x < z #z is not defined
print ('output:', p, '\n')

print('''Problem 16: What will be output of the following program?
True, False = False, True 
print True, False 
print 2 < 3''')
#True, False = False, True #SyntaxError: cannot assign to True
#print ('output:', True, False) 
#print (2 < 3, '\n')

print('''Problem 17: What happens when the following code is executed? Will it give any error? Explain the reasons.
x = 2 
if x == 2: 
    print x
else: 
    print y''')
x = 2 
if x == 2: 
    print(x)
else: 
    print(y)
print('There is no error prompt even though y is not defined\n')

print('''Problem 18: What happens the following code is executed? Will it give any error? Explain the reasons.
x = 2 
if x == 2: 
    print x
else: 
    x +''')
x = 2 
if x == 2: 
    print(x, '\n')
else: 
    print('x +', 'SyntaxError: invalid syntax\n')

print('''Problem 20: What will be the output of the following program?
x = [0, 1, [2]] 
x[2][0] = 3 
print x 
x[2].append(4) 
print x 
x[2] = 2 
print x''')
x = [0, 1, [2]] #[2] is the second dimension array
x[2][0] = 3 
print('output of x[2][0] = 3: x = ', x) 
x[2].append(4) 
print('output of x[2].append(4): x = ', x) 
x[2] = 2 
print('output of x[2] = 2: x = ', x, '\n')

print('''Problem 21: Python has a built-in function sum to find sum of all elements of a list. Provide an implementation for sum.
>>> sum([1, 2, 3]) 
>>> 6''')
def sums(lists):
    add = lists[0]
    for i in lists[1:]:
        add += i
    return add
print('output of sum in given list is:', sums([1, 2, 3]), '\n')

print('''Problem 22: What happens when the above sum function is called with a list of strings? Can you make your sum function work for a list of strings as well.
>>> sum(["hello", "world"]) 
"helloworld" 
>>> sum(["aa", "bb", "cc"]) 
"aabbcc"''')
#print("hello" + "world")
print('output of sum in given list is:', sums(["hello", "world"]))
print('output of sum in given list is:', sums(["aa", "bb", "cc"]), '\n')

print('''Problem 23: Implement a function product, to compute product of a list of numbers.
>>> product([1, 2, 3]) 
6''')
def product(lists):
    mul = lists[0]
    for i in lists[1:]:
        mul = mul * i
    return mul
print('output of product in given list is:', product([1, 2, 3]), '\n')

print('''Problem 24: Write a function factorial to compute factorial of a number. Can you use the product function defined in the previous example to compute factorial?
>>> factorial(4) 
24''')
def factorial(num):
    fact = []               #create an empty list
    for i in range(num):
        fact.append(i+1)    #fill the list based on the number given in the range. i+1 is because i begins with 0
    return product(fact)
print('output of factorial of 4 is:', factorial(4), '\n')

print('''Problem 25: Write a function reverse to reverse a list. Can you do this without using list slicing?
>>> reverse([1, 2, 3, 4])
[4, 3, 2, 1] 
>>> reverse(reverse([1, 2, 3, 4])) 
[1, 2, 3, 4]''')
def reverse(lists):
    newlist = []
    for i in lists[::-1]:   #syntax lists[from element of lists(include): till element of lists(exclude): incremental]
        newlist.append(i)
    return newlist
print('The output of reverse([1,2,3,4]) is', reverse([1,2,3,4]))
print('The output of reverse(reverse([1,2,3,4])) is', reverse(reverse([1,2,3,4])), '\n')

print('''Problem 26: Python has built-in functions min and max to compute minimum and maximum of a given list. 
Provide an implementation for these functions. 
What happens when you call your min and max functions with a list of strings?''')
#when stings are compared, it is based on lexical order
def minimum(lists):
    smallest = lists[0]
    for i in lists[1:]:
        if smallest > i:
            smallest = i
    print(smallest)
    return smallest
#when stings are compared, it is based on lexical order
def maximum(lists):
    largest = lists[0]
    for i in lists[1:]:
        if largest < i:
            largest = i
    print(largest)
    return largest

minimum(['python','assembly','java'])
minimum([20,1000,100])
maximum(['python','assembly','java'])
maximum([20,1000,100])
print()

print('''Problem 27: Cumulative sum of a list [a, b, c, ...] is defined as [a, a+b, a+b+c, ...]. 
Write a function cumulative_sum to compute cumulative sum of a list. 
Does your implementation work for a list of strings?
>>> cumulative_sum([1, 2, 3, 4]) 
[1, 3, 6, 10] 
>>> cumulative_sum([4, 3, 2, 1]) 
[4, 7, 9, 10]''')
def cumulative_sum(lists):
    summation = lists[0]
    lists_num = 1
    for i in lists[1:]:
        summation += i
        lists[lists_num] = summation
        lists_num += 1
    return lists
print('the output of cumulative_sum([1,2,3,4]) is', cumulative_sum([1, 2, 3, 4]) )
print('the output of cumulative_sum([4,3,2,1]) is', cumulative_sum(reverse([1, 2, 3, 4])), '\n')

print('''Problem 29: Write a function unique to find all the unique elements of a list.
>>> unique([1, 2, 1, 3, 2, 5]) 
[1, 2, 3, 5]''')
#The function can be further optimized
def unique(lists):
    unique_list = [lists[0]]       #define an empty list
    lists_length = len(lists)
    for i in range(lists_length):     #i acts as a pointer to lists
        for j in range(len(unique_list)):
            if lists[i] != unique_list[j]:
                if j == len(unique_list)-1:
                    unique_list.append(lists[i])    #only store after comparing fullset of lists
            else:
                break
    return unique_list
print('The result of unique([1, 2, 1, 3, 2, 5]) is', unique([1, 2, 1, 3, 2, 5]), '\n')

print('''Problem 30: Write a function dups to find all duplicates in the list.
>>> dups([1, 2, 1, 3, 2, 5]) 
[1, 2]''')
#there is a flaw in the algo is the list grows longer, the return may contain duplicate itself
def dups(lists):
    new_list = []       #define an empty list
    lists_i = 0
    for i in lists[0:]:
        for j in lists[lists_i+1:]:
            if j == i:
                new_list.append(i)
                break
        lists_i += 1
    return new_list
print('The result of dups([1, 2, 1, 3, 2, 5]) is', dups([1, 2, 1, 3, 2, 5]), '\n')

print('''Problem 31: Write a function group(list, size) that take a list and splits into smaller lists of given size.
>>> group([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) 
[[1, 2, 3], [4, 5, 6], [7, 8, 9]] 
>>> group([1, 2, 3, 4, 5, 6, 7, 8, 9], 4) 
[[1, 2, 3, 4], [5, 6, 7, 8], [9]]''')
def group(lists, size):
    new_list = []
    lists_len = len(lists)
    grouping = int(lists_len/size)
    if lists_len%size > 0:
        grouping += 1
    for i in range(grouping):
        new_list.append(lists[ i*size : (i*size) + size ])
    return new_list
print('The result of group([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) is',group([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) )
print('The result of group([1, 2, 3, 4, 5, 6, 7, 8, 9], 4) is',group([1, 2, 3, 4, 5, 6, 7, 8, 9], 4), '\n')

print('''Problem 32: Write a function lensort to sort a list of strings based on length.
>>> lensort(['python', 'perl', 'java', 'c', 'haskell', 'ruby']) 
['c', 'perl', 'java', 'ruby', 'python', 'haskell']''')
def lensort(lists):
    lists.sort(key=lambda x: len(x))
    return lists
print("The result of lensort(['python', 'perl', 'java', 'c', 'haskell', 'ruby']) is", lensort(['python', 'perl', 'java', 'c', 'haskell', 'ruby']) , '\n')

print('''Problem 33: Improve the unique function written in previous problems to take an optional key function as argument and use the return value of the key function to check for uniqueness.
>>> unique(["python", "java", "Python", "Java"], key=lambda s: s.lower()) 
["python", "java"]''')
def unique_improved(lists, key=0):
    if key:
        for i in range(len(lists)):
            lists[i] = key(lists[i])
    unique_list = [lists[0]]                        #define a unique list initialize witht he first unique value from lists
    lists_length = len(lists)
    for i in range(lists_length):                   #i acts as a pointer to lists
        for j in range(len(unique_list)):           #j act as a pointer to unique_list
            if lists[i] != unique_list[j]:          #only store to unique_list after comparing fullset of lists
                if j == len(unique_list)-1:
                    unique_list.append(lists[i])    
            else:
                break       
    return unique_list
print('The result of unique_improved(["python", "java", "Python", "Java"], key=lambda s: s.lower()) is', unique_improved(["python", "java", "Python", "Java"], key=lambda s: s.lower()), '\n')

print('Problem 34: Reimplement the unique function implemented in the earlier examples using sets.')
print('The result of set[1, 2, 1, 3, 2, 5] is', set([1, 2, 1, 3, 2, 5]))
lists = ["python", "java", "Python", "Java"]
for i in range(len(lists)):
    lists[i]= lists[i].lower()
print('The result of {"python", "java", "Python", "Java"} is', set(lists) )