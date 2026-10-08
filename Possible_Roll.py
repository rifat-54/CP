a,b,c=map(int,input().split())

i=1
ans=False
while i<=a:
    x=i*b
    if(x==c):
        ans=True
        break
    i+=1

if ans:
    print("YES")
else:
    print("NO")
