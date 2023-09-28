def sumofnnum(n):
    if n==0:
        return 0
    else:
        return n+sumofnnum(n-1)
n=int(input())
result = sumofnnum(n)
print(result)