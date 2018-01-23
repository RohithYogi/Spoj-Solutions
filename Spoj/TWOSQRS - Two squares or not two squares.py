t=input()
for i in range(0,t):
    x=input()
    i=pow(x,0.5)
    i=int(i)
    j=0
    while(i>0):
        if(j*j > x):
            print "No"
            break
        elif((i*i + j*j) == x):
            print "Yes"
            break
        elif((i*i + j*j) < x):
            j+=1
        else:
            i-=1
    
    
