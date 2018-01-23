#!/usr/bin/py
def pairs(a,k):
    answer = 0
    s = set(a)
    for v in s:
        if v+k in s:
            answer += 1
     
    return answer
if __name__ == '__main__':
    n, k = map(int, raw_input().split())
    b = map(int, raw_input().split())
    print pairs(b, k)
