RPN = list(raw_input().split(' '))
i = 0
while i<len(RPN):
        if RPN[i] == '+':
            RPN[i-2] = str(int(RPN[i-2]) + int(RPN[i-1]))
            del RPN[i]
            del RPN[i-1]
            print RPN
            i = 0
        elif RPN[i] == '-':
            RPN[i-2] = str(int(RPN[i-2]) - int(RPN[i-1]))
            del RPN[i]
            del RPN[i-1]
            print RPN
            i = 0
        elif RPN[i] == '*':
            RPN[i-2] = str(int(RPN[i-2]) * int(RPN[i-1]))
            del RPN[i]
            del RPN[i-1]
            print RPN
            i = 0
        elif RPN[i] == '/':
            RPN[i-2] = str(int(RPN[i-2]) / int(RPN[i-1]))
            del RPN[i]
            del RPN[i-1]
            print RPN
            i = 0
        i=i+1
