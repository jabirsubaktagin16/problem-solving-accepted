#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    result = 0
    maximum = 0
    
    while n>0:
        if n%2==0:
            result = 0
        else:
            result = result+1
            if result>maximum:
                maximum = result
        
        n //=2
        
    print(maximum)
