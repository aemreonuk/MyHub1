N = [i for i in xrange(1,int(raw_input())+1)]
M = int(raw_input())
i = 0
#print N
while len(N)>=M:
    i=(i+M)%(len(N))
    print i
    N.remove(N[i-1])
    i = i-1
    print N
