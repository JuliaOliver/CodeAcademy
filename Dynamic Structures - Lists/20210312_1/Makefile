CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*)#logic.c listMain.c
OBJECT=logic.o listMain.o#$(CFILES:.c=.o)
TARGET=list
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)
