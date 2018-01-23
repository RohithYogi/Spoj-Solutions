t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    n=l[0]
    m=l[1]
    D=l[2]
    d=[]
    c=0
    for j in range(0,n):
        p=input()
        while(p>D):
            c+=1
            p=p-D
            
    
        
    if(c>=m):
        print 'YES'
        print c
    else:
        print 'NO'
        print c
    

'''
input:
3
6 3 400
500
500
500
500
500
500

6 5 400
800
800
801
200
200
200

6 3 400
401
401
400
200
400
200

output:
YES
NO
NO
'''
