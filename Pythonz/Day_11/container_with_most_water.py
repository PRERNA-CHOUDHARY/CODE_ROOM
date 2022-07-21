# [5,3,6,2,7,0]

def solve(n,arr):
    l=0
    r=len(arr)-1
    max_water=0
    while(l<r):
        
        hl,hr=arr[l],arr[r]
        curr_water=min(hl,hr)*(r-l)
        max_water=max(max_water,curr_water)
        if hl<=hr:
            l+=1
        if hr<=hl:
            r=r-1
        
    return max_water
arr=[1,8,6,2,5,4,8,3,7]
result =solve(9,arr)
print (result)


