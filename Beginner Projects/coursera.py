hrs = float(input("Enter hours : "))
rate = float(input("Enter rate : "))


def computepay(h,r):
    if h <= 40 :
        payment = h * r 
        return payment
    elif h> 40 :
        payment = ((40*r)+(h-40)*(r*1.5))
        return payment
    
final_payment = computepay(hrs,rate)
print("Pay " + str(final_payment))

