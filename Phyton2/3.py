print(2)
a=0
for i in range(3,100,2):
    a=0
    for c in range(1,i//2):
       if i%c==0:
           a += 1
    if a==1:
        print(i)
    a=0   
           
        

