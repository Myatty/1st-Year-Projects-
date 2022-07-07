def main() :
    x = int(input("Type in any number : "))

    if is_even(x) :
        print('Even')
    else :
        print('Odd')

def is_even(n) :
    return n % 2 == 0 

main()