import time
startTime = time.time()
L = []
while (time.time() - startTime) < 60:
    L.append([raw_input().split(' ')])
    print (time.time() - startTime)
i = 0
j = 0
print "zero"
while i < len(L):
    print "first"
    while j < len(L):
        print "second"
        if L[i][1] == L[j][0]:
            L[i][1] == L[j][1]
            L.remove(L[j])
            i = 0
            j = 0
        j = j + 1
    i = i + 1
print L
