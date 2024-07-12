N,K = map(int,input().split())

Jami = (K**N-1)/(K-1)
if N==0:
    print("1")
elif N==1:
    print(K)
else: print(Jami)