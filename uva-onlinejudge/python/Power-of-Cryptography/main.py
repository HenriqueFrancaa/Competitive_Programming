import math

while True:
    try:
        n = int(input())
        p = int(input())
        
        print(round(pow(p,1/n)))
        # print(1234**7)
    except EOFError:
        break