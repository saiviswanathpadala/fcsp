def rotatelist(l,k):
    if(k>=0):
        for i in range(k):
            for j in rangel(en(l)):
                l[j]=l[len(l)]
        for i in range(len(l)):
            print(l[i],end=" , ")
    else:
        for i in range(len(l)):
            print(l[i],end=" , ")
l=[1,2,3,4,5]
rotatelist(l,1)