include "emu8086.inc"
.model small
.stack 100h
.data
n db ?
s db ?
x db ?
rem db ?
res db ?

.code
main proc
    mov ax,@data
    mov ds,ax
    
    
    
    mov al,0
    mov bl,0
    mov ah,0
    mov dl,0
    

    mov bl,0
    
    xor cx,cx
    mov cx,2
    print "ENTER N : "
    
    ;Two digit input
    mov dl,10
    mov ah,1h
    int 21h
    sub al,48
    mul dl
    mov n,al
    mov ah,1h
    int 21h
    sub al,48
    add al,n
    mov n,al
        
    
    printn ""
    print "ENTER S : "
        
    mov ah,1
    int 21h
    
    sub al,48
    mov s,al 
    printn ""
        
    DIVISION:
    

    
    print "ENTER X : "
    mov ah,1
    int 21h 

    printn ""
    sub al,48
        

    mov x,al
    
    cmp al,s
    je exit
    
    mov ah,0
    mov al,0
    mov dl,0
    mov bl,0
    
    mov al,n
    mov bl,x
    div bl
    
    mov n,al
    
    jmp DIVISION
    
    
    
    
    
    exit:
    print "Final output is : "
    ;Two digit output 
    mov al,00
    mov ah,00
   
    mov al,N
    mov bl,10
    div bl
    mov res,al
    mov rem,ah
        
    mov dl,res
    add dl,48
    mov ah,2h
     int 21h
        
    mov dl,rem
    add dl,48
    mov ah,2h  
    int 21h 
    
    mov ax,4c00h
    int 21h
    


main endp

end main