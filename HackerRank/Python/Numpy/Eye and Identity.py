import numpy

n, m = input().split()

numpy.set_printoptions(legacy='1.13')
print(numpy.eye(int(n), int(m)))
