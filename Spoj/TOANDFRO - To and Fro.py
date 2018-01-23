col=int(raw_input())
while(col!=0):
    string=raw_input()
    row=(len(string))/col
    b=""
    for i in range(0,row):
        if i%2==0:
            b+=string[i*col:(i+1)*col]
            print b
        else:
            b+=(string[i*col:(i+1)*col])[::-1]
            print b 
    
    c=""
    for k in range(0,col):
        for p in range(0,row):
            c+=b[k+p*col]
    print c
    col=int(raw_input())

'''5
toioynnkpheleaigshareconhtomesnlewx
3
ttyohhieneesiaabss
0'''
