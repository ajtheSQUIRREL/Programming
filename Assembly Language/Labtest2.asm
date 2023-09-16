include 'emu8086.inc'
.model small
.stack 100h
.data
n db ?
num db ? 
rem db ?
.code
main proc 
    
    print 'Enter a number : '
    
    mov ah,1h
    int 21h
    sub al,48
    mov n,al
    cmp n,5
    je yes 
    cmp n,7
    je yes
    cmp n,1
    je one   
    printn ''
    print 'Enter a two digit num and press enter : '
    mov dl,10
    mov bl,0
    mov cl,0
    jmp any                                         
    
    
  yes: 
  
    printn ''
    print 'It is a number that you want.'
    jmp exit 
    
    
  one:
    printn ''
    print 'The number is : '
    mov al,n 
    add al,48
    mov ah,2h
    mov dl,al
    int 21h
    printn ''
    jmp exit 
    
    
  any:
    mov ah, 01h
    int 21h

    cmp al, 13  
    je  addition 

    mov ah, 0  
    sub al, 48 

    mov cl, al
    mov al, bl  

    mul dl      
    add al, cl  
    mov bl, al
    mov num, bl

    jmp any
      
  addition: 
  
    mov al,num
    add al,5
    mov num,al
  
    printn ''

    mov ah,00
    mov dl,0
    mov bl,0

    mov al,num

    mov bl,10

    div bl

    mov rem,ah
    
    print 'The Sum Is : '
    mov dl,al
    add dl,48
    mov ah,02h
    int 21h
    
    mov dl,rem
    add dl,48
    mov ah,02h
    int 21h
   
  exit: 
    main endp
end main
    