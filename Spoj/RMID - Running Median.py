i=raw_input()
l=[]
try:
    while(True):
        if(i!='-1' and i!='0'):
            l.append(i)
        elif(i=='-1'):
            if(len(l)%2=='0'):
                k=l[(len(l)/2)-1]
                print l[(len(l)/2)-1]
            else:
                k=l[(len(l)/2)]
                print l[(len(l)/2)]
            l.remove(k)
        elif(i=='0'):
            l=[]
            print 
        i=raw_input()
except EOFError:
    pass

''' time limit exceeded'''
