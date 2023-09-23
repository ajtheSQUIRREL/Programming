.MODEL SMALL
.STACK 100H   
.DATA
MSG1 DB 'NUM1 : $'
MSG2 DB 'NUM2 ; $'
X DB ?
Y DB ?
Z DB ? 
REM DB 0
.CODE
MAIN PROC 
    
    MOV AX,@DATA
    MOV DS,AX
    
    MOV AH,9
    MOV DX, OFFSET MSG1
    INT 21H
    
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
    
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    MOV BL,X
    ADD BL,Y
    MOV Z,BL
    
    MOV AH,00
    
    MOV AL,Z
    
    MOV BL,10                                                
    
    DIV BL
    
    MOV REM,AH
    
    MOV DL,AL
    ADD DL,48
    
    MOV AH,2
    INT 21H
    
    MOV DL,REM
    ADD DL,48
    
    MOV AH,2
    INT 21H
   
    
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN   