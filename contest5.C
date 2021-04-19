skow = int(input())
balk = int(input())
kab = int(input())
mum = int(input())
n = int(input())
sp = []
 
def CH(skow, balk, kab, mum, n):
    sc = 0
    if skow == 1 or balk == 1 or kab == 1 or mum == 1:
        return n
    for i in range(1, n+1):
        if i % skow == 0 or i % balk == 0 or i % kab == 0 or i % mum == 0:
            sc += 1
    return sc
 
 
print(CH(skow, balk, kab, mum, n))
