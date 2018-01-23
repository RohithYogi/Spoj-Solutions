p=input()
while(p>0):
    k=raw_input()
    k=k.split()
    i=0
    I=int(k[0])
    J=int(k[1])
    for i in range(0,I):
        b=""
        for j in range(0,J):
            if(i==0 or i==I-1 or j==0 or j==J-1):
                b+='*'
            else:
                b+='.'
        print b
    p=p-1
            
     
