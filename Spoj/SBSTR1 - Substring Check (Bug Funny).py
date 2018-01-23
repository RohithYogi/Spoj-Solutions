p=0
while(p<24):
        k=raw_input()
        k=k.split()
        k[0]=int(k[0])
        k[1]=int(k[1])
        print k
        if (k[0]>>0) == k[1] or (k[0]>>1) == k[1] or (k[0]>>2) == k[1] or (k[0]>>3) == k[1] or (k[0]>>4) == k[1] or (k[0]>>5) == k[1]:
            print 1
        else:
            print 0
        p=p-1
