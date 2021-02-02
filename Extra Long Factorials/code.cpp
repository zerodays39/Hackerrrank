#!/bin/python

import math
import os
import random
import re
import sys


def extraLongFactorials(n):
     fac=1
     if n == 1:
        print("1")
     else:
            for i in range(1, n + 1):
               fac = fac * i
    
            print(fac)
    
if __name__ == '__main__':
    n = int(raw_input())

    extraLongFactorials(n)
