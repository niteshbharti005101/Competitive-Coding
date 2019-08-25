# PROBLEM1

#!/bin/python3
import math
import os
import random
import re
import sys
# Complete the birthday function below.
def birthday(s, d, m):
    combo = 0
    for a in range(len(s)):
        if sum(s[a:a+m]) == d:
            combo += 1
    return combo
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input().strip())
    s = list(map(int, input().rstrip().split()))
    dm = input().rstrip().split()
    d = int(dm[0])
    m = int(dm[1])
    result = birthday(s, d, m)
    fptr.write(str(result) + '\n')
    fptr.close()

# PROBLEM2

#!/bin/python3
import math
import os
import random
import re
import sys
# Complete the catAndMouse function below.
def catAndMouse(x, y, z):
    if abs(x-z) == abs(y-z):
        return "Mouse C"
    elif abs(x-z) > abs(y-z):
        return "Cat B"
    else:
        return "Cat A"
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    q = int(input())
    for q_itr in range(q):
        xyz = input().split()
        x = int(xyz[0])
        y = int(xyz[1])
        z = int(xyz[2])
        result = catAndMouse(x, y, z)
        fptr.write(result + '\n')
    fptr.close()

# PROBLEM3

#!/bin/python3
import math
import os
import random
import re
import sys
# Complete the viralAdvertising function below.
def viralAdvertising(n):
    cumulative = 0
    shared = 5
    for i in range(1,n+1):
        liked = (shared//2)
        cumulative += liked
        shared = (liked*3)
    return cumulative
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    result = viralAdvertising(n)
    fptr.write(str(result) + '\n')
    fptr.close()

# PROBLEM4

#!/bin/python3
import math
import os
import random
import re
import sys
# Complete the divisibleSumPairs function below.
def divisibleSumPairs(n, k, ar):
    pairs = 0
    for i in range(n):
        for j in ar[i+1:]:
            if (ar[i]+j)%k==0:
                pairs += 1
    return pairs
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])
    ar = list(map(int, input().rstrip().split()))
    result = divisibleSumPairs(n, k, ar)
    fptr.write(str(result) + '\n')
    fptr.close()

# PROBLEM5

#!/bin/python3
import math
import os
import random
import re
import sys
# Complete the countingValleys function below.
def countingValleys(n, s):
    valleys = 0
    currentlevel = 0
    for letter in s:
        if letter=="U":
            currentlevel += 1
        else:
            currentlevel -= 1
        if currentlevel==0 and letter=="U":
            valleys += 1
    return valleys
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    s = input()
    result = countingValleys(n, s)
    fptr.write(str(result) + '\n')
    fptr.close()

# PROBLEM6

#!/bin/python3
import math
import os
import random
import re
import sys
# Complete the timeInWords function below.
def timeInWords(h, m):
    text = {1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine", 10: "ten", 11: "eleven", 12: "twelve", 13: "thirteen", 14: "fourteen", 15: "fifteen", 16: "sixteen", 17: "seventeen", 18: "eighteen", 19: "nineteen", 20: "twenty", 21: "twenty one", 22: "twenty two", 23: "twenty three", 24: "twenty four", 25: "twenty five", 26: "twenty six", 27: "twenty seven", 28: "twenty eight", 29: "twenty nine"}
    if m == 0:
        return text[h] + " o' clock"
    elif m == 30:
        return "half past " + text[h]
    elif m < 30:
        if m == 15:
            return "quarter past " + text[h]
        if m == 1:
            return "one minute past " + text[h]
        else:
            return text[m] + " minutes past " + text[h]
    else:
        h+=1
        m = 60-m
        if m == 1:
            return "one minute to " + text[h]
        elif m == 15:
            return "quarter to " + text[h]
        else:
            return text[m] + " minutes to " + text[h]
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    h = int(input())
    m = int(input())
    result = timeInWords(h, m)
    fptr.write(result + '\n')
    fptr.close()
