#include <stdio.h>
#include <ctype.h>
#include <string.h>

int resultentry(void);
int options(void);
int listening(void);
int speaking(void);
int reading(void);
int writing(void);
int exiting(void);

int resultentry(void)
    {char name[50];
    while (1)
        {printf("Hello , welcome to the MUET actual result calculator , where you will know the actual score you got without scaling to 90 . Please enter your name:\n");fgets(name, sizeof(name), stdin);
        if (name[0] == '\n')
            {printf("Invalid response.\n");
            continue;}
            break;}
        
        name[strcspn(name, "\n")] = '\0';
        for (int i = 0; name[i] != '\0'; i = i + 1)
            {name[i] = tolower(name[i]);}
        
        printf("Good to see you , %s", name);
        printf("\n");
        return 1;}
    
int options(void)
   {char select[20];
    int input;

    while (1)
        {printf("(1) Listening | (2) Speaking | (3) Reading | (4) Writing | (5) Exit\n");
        printf("Please select the following options by inputing the digits : '1' , '2' , '3', '4' or '5'.\n");fgets(select, sizeof(select), stdin);
        if (select[0] == '\n')
            {printf("Invalid response.\n");
            continue;}
        
        if (sscanf(select, "%d", &input) != 1)
            {printf("Invalid response.\n");
            continue;}
        
        if (input == 1)
            {listening();}
        else if (input == 2)
            {speaking();}
        else if (input == 3)
            {reading();}
        else if (input == 4)
            {writing();}
        else if (input == 5)
            {printf("Byebye!");
            return 0;}
        else 
            {printf("Invalid response.\n");
            continue;}
        
        if (exiting() == 1)
            {continue;}
        else
            {printf("Byebye!\n");
            return 0;}}}
    
int listening(void)
    {char scorelisten[20];
    int input;
    float result;

    while (1)
        {printf("Please input your score as written in your certificate\n");fgets(scorelisten, sizeof(scorelisten), stdin);
        if (scorelisten[0] == '\n')
            {printf("Invalid response.");
            continue;}
        
        if (sscanf(scorelisten, "%d", &input) != 1)
            {printf("Invalid response.");
            continue;}
        
        if ((input < 0) || (input > 90))
            {printf("Score must be between 0 and 90 marks as per your certificate!\n");;
            continue;}
        
        result = ((float)input / 90) * 30;
        printf("Your actual result is %.0f / 30.\n", result);
        return 1;}}

int speaking(void)
    {char scorespeaking[20];
    int input;
    float result;

    while (1)
        {printf("Please input your score as written in your certificate\n");fgets(scorespeaking, sizeof(scorespeaking), stdin);
        if (scorespeaking[0] == '\n')
            {printf("Invalid response.\n");
            continue;}
        
        if (sscanf(scorespeaking, "%d", &input) != 1)
            {printf("Invalid response.\n");
            continue;}
        
        if ((input < 0) || (input > 90))
            {printf("Score must be between 0 and 90 marks as per your certificate!");
            printf("\n");
            continue;}
        
        result = ((float)input / 90) * 42;
        printf("Your actual result is %.0f / 42.\n", result);
        return 1;}}

int reading(void)
    {char scorereading[20];
    int input;
    float result;

    while (1)
        {printf("Please input your score as written in your certificate\n");fgets(scorereading, sizeof(scorereading), stdin);
        if (scorereading[0] == '\n')
            {printf("Invalid response.\n");
            continue;}
        
        if (sscanf(scorereading, "%d", &input) != 1)
            {printf("Invalid response.\n");
            continue;}
        
        if ((input < 0) || (input > 90))
            {printf("Score must be between 0 and 90 marks as per your certificate!");
            printf("\n");
            continue;}
        
        result = ((float)input / 90) * 40;
        printf("Your actual result is %.0f / 40.\n", result);
        return 1;}}

int writing(void)
    {char scorewriting[20];
    int input;

    while (1)
        {printf("Please input your score as written in your certificate\n");fgets(scorewriting, sizeof(scorewriting), stdin);
        if (scorewriting[0] == '\n')
            {printf("Invalid response.\n");
            continue;}
        
        if (sscanf(scorewriting, "%d", &input) != 1)
            {printf("Invalid response.\n");
            continue;}
        
        if ((input < 0) || (input > 90))
            {printf("Score must be between 0 and 90 marks as per your certificate!");
            printf("\n");
            continue;}
        
        printf("Your result on your certificate is your actual score (%d / 90)! No need to do anything about it.\n", input);
        return 1;}}

int exiting(void)
   {char select[20];
    int input;

    while (1)
        {printf("(1) Do it again | (2) Exit\n");
        printf("Please select the following options by inputing the digits : '1' or '2'.\n");fgets(select, sizeof(select), stdin);
        if (select[0] == '\n')
            {printf("Invalid response.\n");
            continue;}
        
        if (sscanf(select, "%d", &input) != 1)
            {printf("Invalid response.\n");
            continue;}
        
        if (input == 1)
            {return 1;}
        else if (input == 2)
            {return 0;}
        else 
            {printf("Invalid response\n");
            continue;}}}

int main(void)
    {resultentry();
    options();

    return 0;}
    


   


    
            
        

        
