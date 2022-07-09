def solve(s,d,h,n):
    if(n==1):
        print("moving plate",n,"form",s,"to ",d)
        return
    solve(s,h,d,n-1)
    print("moving plate",n,"form",s,"to ",d)   
    solve(h,d,s,n-1)

    return 


n=int(input())
s=1
d=3
h=2
solve(s,d,h,n)
