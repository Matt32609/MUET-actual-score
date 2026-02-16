#!/usr/bin/env python3

def MUET_result():
        name = input("Hello , welcome to the MUET actual result calculator , where you will know the actual score you got without scaling to 90 . Please enter your name :")
        print(f"Good to see you , {name} .")
MUET_result()

def answer():
        selection = input("Please select an option out of the four . Please respond with either 'listening' , 'speaking' , 'reading' or 'writing' to continue. ").lower()
        if selection == "listening":
            score = input("Please enter the obtained score that you received as written on the certificate :")
            result = (float(score) / 90) * 30
            if result.is_integer:
                print(f"Your actual score : {int(result)}/30")
            else:
                print(f"Your actual score : {result:2f}/30")
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.")
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        elif selection == "speaking":
            score = input("Please enter the obtained score that you received as written on the certificate :").lower()
            result = (float(score) / 90) * 42
            if result.is_integer:
                print(f"Your actual score : {int(result)}/42")
            else:
                print(f"Your actual score : {result:2f}/42")
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.")
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        elif selection == "reading":
            score = input("Please enter the obtained score that you received as written on the certificate :").lower()
            result = (float(score) / 90) * 40
            if result.is_integer:
                print(f"Your actual score : {int(result)}/40")
            else:
                print(f"Your actual score : {result:2f}/40")
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.")
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        elif selection == "writing":
            print("Your score is literally on the certificate , no need to do some algebra...")
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.")
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        else:
            print("Invalid response.")
            exit()
answer()

while True:
    answer()
    
