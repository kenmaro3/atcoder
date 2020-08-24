if __name__ == "__main__":
    x = input()
    x = int(x)

    digits = 200000
    index = 200000

    tmp1 = []
    for i in range(digits):
        tmp2 = pow(2,index)

        if(tmp2>x):
            continue
        tmp3 = x%tmp2
        if tmp2 != 0:
            x -= tmp3*index
            tmp1.append(tmp3)
        index -= 1
    result1 = sum(tmp1)

    if(result1%9 ==0):
        print("Yes")
    else:
        print("No")

