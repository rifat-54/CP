t=int(input())

while(t>0):
    n=int(input())
    sum=0
    mn=999
    # while(n>0):
    #     x=int(input())
    #     if(x<mn):
    #         mn=x
    #     sum+=x
    #     n-=1
    a=list(map(int,input().split()))
    for x in a:
        sum+=x
        if(x<mn):
            mn=x

    sum-=mn
    print(sum)
    t-=1


