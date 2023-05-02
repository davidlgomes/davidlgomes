#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica e de Computacao
#EEL270 - Computacao II - Turma 2020/4 - PLE-1
#Prof. Marcelo Luiz Drumond Lanza
#Autor: David Lopes Gomes
#Descricao: Makefile aula0101
#
#$Author: david.lopes $
#$Date: 2020/08/31 02:40:53 $
#$Log: Makefile,v $
#Revision 1.5  2020/08/31 02:40:53  david.lopes
#Makefile
#
#Revision 1.4  2020/08/26 15:42:01  david.lopes
#Makefile
#
#Revision 1.3  2020/08/26 15:20:44  david.lopes
#Makefile
#Makefile
#
#Revision 1.2  2020/08/26 14:09:54  david.lopes
#Makefile
#
#Revision 1.1  2020/08/26 13:07:56  david.lopes
#Initial revision
#

CC=gcc

LD=gcc

CFLAGS = -std=c11 -Wall

LFLAGS = -std=c11 -Wall

AULA01 = aula0101\
	 aula0102\
	 aula0103\
	 aula0104\
	 aula0105

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o
AULA0105OBJS = aula0105.o

EXECS = $(AULA01)

ALL = $(EXECS)

.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(AULA01)

aula01:$(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)

aula0104: $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)

aula0105: $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)

clean: 
	rm -f *.o
	rm -f $(EXECS)

# $RCSfile$
