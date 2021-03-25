CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*)#functionsLogic.c task.c
OBJECT=functionsLogic.o task.o#$(CFILES:.c=.o)
TARGET=task
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)
