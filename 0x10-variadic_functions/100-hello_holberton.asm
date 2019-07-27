.MODEL SMALL
 
.STACK
 
.DATA
 
STRING DB 10, 19, ‘Hello, Holberton $'             ; declaring string
 
.CODE
 
MAIN PROC                                          ; main procedure
 
MOV AX, @DATA                                      ; initialize the data segment
 
MOV DS, AX
 
LEA DX, STRING                                     ; loading the effective address
 
MOV AH, 09H                                        ; for string display
 
INT 21H                                            ; dos interrupt function
 
MOV AX, 4C00H                                      ; end request
 
INT 21H
 
MAIN ENDP                                          ; end procedure
 
END MAIN                                           ; end program 
