

print("Welcome to the reverbeartion time finder!")

def what():
    var = input("What do you want to find? A/T/V, Leave empty for T:\n")
    return var

def Finder(variable):
    if variable == "T" or variable == "":
        variable = "T"
        V = int(input("Input value of V:"))
        A = int(input("Input value of A:"))
        output = 0.161 * (V / A)
    elif variable == "A":
        T = int(input("Input value of T:"))
        V = int(input("Input value of V:"))
        output = 0.161 * (V / T)
    elif variable == "V":
        T = int(input("Input value of T:"))
        A = int(input("Input value of V:"))
        output = (T * A)/0.161
    else:
        print("Invalid input, please try again")
    print(f"The value of {variable} is {output}")

Finder(variable=what())

