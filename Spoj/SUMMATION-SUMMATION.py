t=input()
for i in range(0,t):
    l=input()
    p=map(int,raw_input().strip().split())
    s=sum(p)
    T=s*(pow(2,l-1))
    print "Case "+ str(i+1)+": "+str(T%100000007)


'''

global T
T=[]
def sumOfsubsequences(L,left,right,summ):
    if(left>right):
        T.append(summ)
        return
    sumOfsubsequences(L,left+1,right,summ+L[left])

    sumOfsubsequences(L,left+1,right,summ)

    



    
t=input()
for i in range(0,t):
    l=input()
    p=map(int,raw_input().strip().split())
    sumOfsubsequences(p,0,l-1,0)
    print "Case "+ str(i+1)+": "+str(sum(T)%100000007) 
    T=[]
'''
