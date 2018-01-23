t=input()
while(t>0):
    l=map(float,raw_input().strip().split())
    a=l[5]
    b=l[4]
    c=l[3]
    d=l[2]
    e=l[1]
    f=l[0]
    A=a*a
    B=b*b
    C=c*c
    D=d*d
    E=e*e
    F=f*f
    vol = (abs((-(A*B*C) - (A*D*E) - (B*D*F) - (C*E*F)
                + (A*C*D) + (B*C*D) + (A*B*E) + (B*C*E)
                + (B*D*E) +(C*D*E) + (A*B*F) + (A*C*F)
                + (A*D*F) + (C*D*F) + (A*E*F) + (B*E*F)
                - (C*C*D) - (C*D*D) - (B*B*E) - (B*E*E)
                - (A*A*F) - (A*F*F))/144.0))**(0.5)
    print "%.4f"%vol
    t-=1
