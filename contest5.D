import sys
 
n = int(sys.stdin.readline().split()[0])
 
if n % 2 == 0:
    print(n // 2)
else:
    n -= 3
    print(n // 2 + 1)
    print("3", end=' ')
 
for i in range(n // 2):
    print("2", end=' ')
