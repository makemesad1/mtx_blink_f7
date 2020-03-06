MEMORY{
	ROM(rx)    : ORIGIN = 0x08000000, LENGTH = 1M
	SRAM (rwx) : ORIGIN = 0x20010000, LENGTH = 240K
}

_estack = LENGTH(SRAM) + ORIGIN(SRAM);

SECTIONS{
	.isr_vector : {
	KEEP(*(.isr_vector))
	} >ROM
	
	.text : {
        . = ALIGN(4);
        *(.text)
    } >ROM
	
	_sidata = LOADADDR(.data);
        .data : {
		. = ALIGN(4);
		_sdata = .;
		*(.data)
		. = ALIGN(4);
		_edata = .;
	} >SRAM AT>ROM
	
	.bss : {
		. = ALIGN(4);
		_sbss = .;
		*(.bss)
		. = ALIGN(4);
		_ebss = .;
	} >SRAM
}