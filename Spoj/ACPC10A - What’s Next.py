while(True):
    k=map(int,raw_input().strip().split())
    a=k[0]
    b=k[1]
    c=k[2]
    if(a!=0 or b!=0 or c!=0):
        diff1=b-a
        diff2=c-b
        if(diff1==diff2):
            print ("AP "+str(c+diff1))
        else:
            if(a!=0 and b!=0):
                ratio1=b/a
                ratio2=c/b
                if(ratio1==ratio2):
                    print ("GP "+str(c*ratio1))
            elif(a!=0 and b==0):
                print ("GP "+str(0)) 
    else:
        break
        
