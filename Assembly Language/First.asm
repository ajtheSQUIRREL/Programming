.MODEL SMALL
.STACK 100H 
.DATA
X DB 0
Y DB 0
Z DB 0 
REM DB 0
.CODE
MAIN PROC
    MOV AH,1
    INT 21H
    SUB AL,48
    MOV X,AL
      
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H        
            
    MOV AH,1
    INT 21H 
    SUB AL,48
    MOV Y,AL
    
    ADD AL,X 
    MOV Z,AL
   
    
    MOV AH,2
    MOV DL,AL
    INT 21H
    
    
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN