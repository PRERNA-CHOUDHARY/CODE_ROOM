def solve(string):
    st=[]
    for i in string :
        if len(st)==0 or st[-1]!=i:
            st.append(i)
        elif i==st[-1]:
            st.pop()
        
    s="".join(st)
    print(s)


solve("abbcadffdacax")