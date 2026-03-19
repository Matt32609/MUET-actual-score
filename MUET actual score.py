#!/usr/bin/env python3

def MUET_result():
        name = input("Hello , welcome to the MUET actual result calculator , where you will know the actual score you got without scaling to 90 . Please enter your name :")
        print(f"Good to see you , {name} .")
MUET_result()

def answer():
        selection = input("Please select an option out of the four . Please respond with either 'listening' , 'speaking' , 'reading' or 'writing' to continue. ").lower()
        if selection == "listening":
            score_input = input("Please enter the obtained score that you received as written on the certificate :")
            try:
                score = float(score_input)
                if score < 0 or score > 90:
                    print("INVALID! MUET scores must be between 0 to 90.")
                    return True
                result = (score / 90) * 30
                if result.is_integer:
                    print(f"Your actual score : {int(result)}/30")
                else:
                    print(f"Your actual score : {result:.2f}/30") 
            except ValueError:
                print("Invalid response.")
                return True          
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.").lower()
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        elif selection == "speaking":
            score_input = input("Please enter the obtained score that you received as written on the certificate :")
            try:
                score = float(score_input)
                if score < 0 or score > 90:
                    print("INVALID! MUET scores must be between 0 to 90.")
                    return True
                result = (score / 90) * 42
                if result.is_integer:
                    print(f"Your actual score : {int(result)}/42")
                else:
                    print(f"Your actual score : {result:.2f}/42") 
            except ValueError:
                print("Invalid response.")
                return True          
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.").lower()
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        elif selection == "reading":
            score_input = input("Please enter the obtained score that you received as written on the certificate :")
            try:
                score = float(score_input)
                if score < 0 or score > 90:
                    print("INVALID! MUET scores must be between 0 to 90.")
                    return True
                result = (score / 90) * 40
                if result.is_integer:
                    print(f"Your actual score : {int(result)}/40")
                else:
                    print(f"Your actual score : {result:.2f}/40") 
            except ValueError:
                print("Invalid response.")
                return True          
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.").lower()
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        elif selection == "writing":
            print("Your score is literally on the certificate , no need to do some algebra...")
            confirmation = input("Do you wish to continue? Please respond with 'yes' or 'no' to respond.").lower()
            if confirmation == "yes":
                print(f"Alright")
                return True
            else:
                exit()
        else:
            print("Invalid response.")
            return True
answer()

while True:
    answer()
    
    
