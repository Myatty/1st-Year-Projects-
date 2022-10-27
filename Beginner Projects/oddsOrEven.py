while True : 
    try :
        x = int(input("Enter any Number : "))
    except ValueError:
        print("Please enter Integer! ")
        
    else :
        if x%2 == 0 :
            print("The number u have typed is even.")

        else :
            print("The number u have typed is odd.")
        
    
