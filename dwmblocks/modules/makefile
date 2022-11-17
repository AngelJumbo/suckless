all: bindir block-cpu block-datetime block-ram block-temperature block-uptime block-bat block-keymap

bindir:
	mkdir -p ./bin

block-cpu: cpu.c util.o
	$(CC) cpu.c util.o -o bin/block-cpu 

block-datetime: datetime.c util.o
	$(CC) datetime.c util.o -o bin/block-datetime

block-ram: ram.c util.o
	$(CC) ram.c util.o -o bin/block-ram

block-temperature: temperature.c util.o
	$(CC) temperature.c util.o -o bin/block-temperature

block-uptime: uptime.c util.o
	$(CC) uptime.c util.o -o bin/block-uptime

block-bat: battery.c util.o
	$(CC) battery.c util.o -o bin/block-battery

block-keymap: keymap.c util.o
	$(CC) keymap.c util.o -o bin/block-keymap -lX11 

util.o: util.c
	$(CC) -c util.c -o util.o

.PHONNY: clean
clean:
	$RM ./util.o
	$RM bin/*
