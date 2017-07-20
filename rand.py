#!/usr/bin/python

import random
# Change nums to run tests of "nums" length
nums = 10 
a = range(0,50)
for i in xrange(nums):
    b = a[random.randint(0, len(a)-i)]
    a.remove(b)
    print b
