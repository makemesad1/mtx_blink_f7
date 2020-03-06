bin/prog.elf: init.o main.o bin
	arm-none-eabi-gcc -o bin/prog.elf init.o main.o -TFLASH.ld -nostartfiles -nodefaultlibs -nostdlib
	rm main.o
	rm init.o
	make to_bin

bin:
	mkdir bin

%.o: %.c
	arm-none-eabi-gcc -mthumb -c $< -o $@ -Iinclude

to_bin:
	arm-none-eabi-objcopy -O binary bin/prog.elf bin/prog.bin

hex:
	hexdump bin/prog.bin

d:
	arm-none-eabi-objdump -d bin/prog.elf

clean:
	rm bin/prog.elf
	rm bin/prog.bin
