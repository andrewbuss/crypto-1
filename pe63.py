from numpy.core.umath import log10

t = 0

for d in range(200):
    b = 0
    while b<(10**d):
        v = b**d
        l = len(str(v))
        if l == d:
            print b,d,v
            t+=1
        elif l > d: break
        b+=1

print t