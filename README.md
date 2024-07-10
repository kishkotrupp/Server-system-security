Инструкция по установке логической бомбы.
1. Установите на свой компьютер компилятор nasm.
Sudo apt-get install nasm
2. В файле в строке "filename.txt" замените данный текст на имя уничтожаемого файла.
3. Измените формат файла на .asm.
4. Скомпилируйте файл.
nasm -felf LogicBomb.asm -o LogicBomb.o
ld -m elf_i386 LogicBomb.o -o LogicBomb
5. Для запуска файла требуется ввести
./LogicBomb

Видеоролик о работе: https://drive.google.com/drive/folders/1lfGo_Y3kUMKycy0zQZaMGgBwlMjjjP_v?hl=ru
