# number is a perfect square, it has an odd number of divisors.
#It is isn't, the number of divisors is even
t=input()
for i in range(0,t):
    k=input()
    p=pow(k,0.5)
    pw=int(p)
    if((pw*pw)==k or ((pw-1)*(pw-1))==k or ((pw+1)*(pw+1))==k):
        print "Case "+str(i+1)+": "+"Yes"
    else:
        print "Case "+str(i+1)+": "+"No"
    
