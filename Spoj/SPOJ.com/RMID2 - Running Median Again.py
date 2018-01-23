p=input()
while(p>0):
    l=[]
    i=input()
    while(i!=0):
        if(i!=-1):
            l.append(i)
        else:
            l.sort()
            if(len(l)%2==0):
                k=l[(len(l)/2)-1]
                print l[(len(l)/2)-1]
            else:
                k=l[(len(l)/2)]
                print l[(len(l)/2)]
            l.remove(k)
        i=input()
    p=p-1
''' time limit exceeded'''
