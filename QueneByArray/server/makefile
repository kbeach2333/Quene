object=Main.o Menu.o\
	CreateQuene.o Close.o Dissolve.o QueneUp.o SeeDoctor.o ShowQuene.o ShowMessage.o
Quene:$(object)
	gcc -o Quene $(object)
$(object):../include/quene.h
.PHONY:clean
clean:
	rm Quene $(object)