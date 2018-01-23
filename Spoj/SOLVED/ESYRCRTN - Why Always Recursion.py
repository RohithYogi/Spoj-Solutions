def F(n,s):
    if(n>0):
        if(n==1):
            s=s+1
            return F(0,s)
        elif(n==2):
            s=s+3
            return F(1,s)
        elif(n==3):
            s=s+2
            return F(2,s)
        elif(n==4):
            s=s-1
            return F(3,s)
        elif(n==5):
            s=s-3
            return F(4,s)
        elif(n==6):
            s=s-2
            return F(5,s)
        else:
            if(n%6==0):
                n=6
            else:
                n=n%6
            return F(n,s)
    else:
        return s
t=input()
for i in range(0,t):
    print F(input(),0)
    
