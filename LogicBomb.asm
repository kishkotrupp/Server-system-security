section .data
filename db 'filename.txt', 0

section .text
global _start

_start:

; Открытие файла на запись
mov eax, 5
mov ebx, filename
mov ecx, 0x200 | 0x1 | 0x8000
int 0x80

; Заполнение файла нулями
mov eax, 0 ; 
mov ecx, filename
mov edx, 131072
int 0x80

; Закрытие файла
mov eax, 6
mov ebx, 4
int 0x80

; Выход из программы
mov eax, 1
xor ebx, ebx
int 0x80