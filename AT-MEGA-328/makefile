
# globals
FILENAME = main
DEVICE = atmega328p
PARTNO = m328p
PROGRAMMER_ISP = atmelice_isp
PROGRAMMER_DEBUG = atmelice_dw
# command lines
COMPILE = avr-gcc -g -mmcu=$(DEVICE) 

#
default:  compile program clean

compile:
	$(COMPILE) -Os -c $(FILENAME).c   
	$(COMPILE) -o $(FILENAME).elf $(FILENAME).o 
	avr-objcopy -j .text -j .data -O ihex $(FILENAME).elf $(FILENAME).hex
	avr-size --format=avr --mcu=$(DEVICE) $(FILENAME).elf

program:
	avrdude -v -p $(DEVICE) -c $(PROGRAMMER_ISP) -U flash:w:$(FILENAME).hex:i	

clean:
	rm $(FILENAME).o
	rm $(FILENAME).elf
	rm $(FILENAME).hex
