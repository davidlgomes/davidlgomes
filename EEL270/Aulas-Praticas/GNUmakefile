#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica e de Computacao
#EEL270 - Computacao II - Turma 2020/4 - PLE-1
#Prof. Marcelo Luiz Drumond Lanza
#Autor: David Lopes Gomes
#Descricao: GNUmakefile aula02
#
#$Author: david.lopes $
#$Date: 2020/10/22 06:29:42 $
#$Log: GNUmakefile,v $
#Revision 1.43  2020/10/22 06:29:42  david.lopes
#GNUmakefile
#
#Revision 1.42  2020/10/22 05:43:24  david.lopes
#GNUmakefile
#
#Revision 1.41  2020/10/17 18:39:56  david.lopes
#GNUmakefile
#
#Revision 1.40  2020/10/17 18:36:25  david.lopes
#GNUmakefile
#
#Revision 1.39  2020/10/17 18:32:20  david.lopes
#GNUmakefile
#
#Revision 1.38  2020/10/14 23:28:58  david.lopes
#GNUmakefile
#
#Revision 1.37  2020/10/14 19:58:37  david.lopes
#GNUmakefile
#
#Revision 1.36  2020/10/13 20:03:40  david.lopes
#GNUmakefile
#
#Revision 1.35  2020/10/09 04:36:45  david.lopes
#GNUmakefile
#
#Revision 1.34  2020/10/08 21:12:55  david.lopes
#GNUmakefile
#
#Revision 1.33  2020/10/08 20:26:11  david.lopes
#GNUmakefile
#
#Revision 1.32  2020/10/02 21:34:10  david.lopes
#GNUmakefile
#
#Revision 1.31  2020/10/01 23:15:18  david.lopes
#GNUmakefi√le
#
#Revision 1.30  2020/10/01 20:01:18  david.lopes
#GNUmakefile
#
#Revision 1.29  2020/10/01 19:45:41  david.lopes
#GNUmakefile
#
#Revision 1.28  2020/10/01 18:37:21  david.lopes
#GNUmakefile
#
#Revision 1.27  2020/10/01 17:22:20  david.lopes
#GNUmakefile
#
#Revision 1.26  2020/10/01 17:12:26  david.lopes
#GNUmakefile
#
#Revision 1.25  2020/10/01 14:51:08  david.lopes
#GNUmakefile
#
#Revision 1.24  2020/10/01 14:48:08  david.lopes
#GNUmakefile
#
#Revision 1.23  2020/10/01 13:53:08  david.lopes
#GNUmakefile
#
#Revision 1.22  2020/10/01 13:45:44  david.lopes
#GNUmakefile
#
#Revision 1.21  2020/09/30 16:42:56  david.lopes
#GNUmakefile
#
#Revision 1.20  2020/09/30 15:46:29  david.lopes
#GNUmakefile
#
#Revision 1.19  2020/09/30 14:41:44  david.lopes
#GNUmakefile
#
#Revision 1.18  2020/09/22 21:01:53  david.lopes
#GNUmakefile
#
#Revision 1.17  2020/09/22 20:42:07  david.lopes
#GNUmakefile
#
#Revision 1.16  2020/09/22 20:36:51  david.lopes
#GNUmakefile
#
#Revision 1.15  2020/09/22 20:28:02  david.lopes
#GNUmakefile
#
#Revision 1.14  2020/09/22 18:59:50  david.lopes
#GNUmakefile
#
#Revision 1.13  2020/09/15 19:28:55  david.lopes
#GNUmakefile
#
#Revision 1.12  2020/09/15 19:22:18  david.lopes
#GNUmakefile
#
#Revision 1.11  2020/09/15 19:12:38  david.lopes
#GNUmakefile
#
#Revision 1.10  2020/09/15 18:37:26  david.lopes
#GNUmakefile
#
#Revision 1.9  2020/09/09 02:44:43  david.lopes
#GNUmakefile
#
#Revision 1.8  2020/09/09 02:36:05  david.lopes
#GNUmakefile
#
#Revision 1.7  2020/09/09 02:22:29  david.lopes
#GNUmakefile
#
#Revision 1.6  2020/09/09 00:55:34  david.lopes
#GNUmakefile
#
#Revision 1.5  2020/09/03 05:04:39  david.lopes
#GNUmakefile
#
#Revision 1.4  2020/09/03 05:01:24  david.lopes
#GNUmakefile
#
#Revision 1.3  2020/09/03 04:41:51  david.lopes
#GNUmakefile
#
#Revision 1.2  2020/09/03 04:11:12  david.lopes
#GNUmakefile
#
#Revision 1.1  2020/09/01 18:00:31  david.lopes
#Initial revision
#

OS= $(shell uname -s)

CC=gcc
LD=gcc

ifeq ($(cc), CLANG)

CC=clang

LD=clang

endif

CFLAGS = -std=c11 -Wall -D_linux_

LFLAGS = -std=c11 -Wall -D_linux_

ifeq ($(debug), _MY_DEBUG_)
CFLAGS = -std=c11 -Wall -D_MY_DEBUG
endif

AR = ar

AFLAGS = -r

LIBMATEMATICA = libmatematica.a

LIBARQUIVOS = libarquivos.a
LIBMATEMATICAOBJS = aula0401a.o

LIBARQUIVOSOBJS = aula0801.o

LIBS = $(LIBMATEMATICA)\
       $(LIBARQUIVOS)

AULA01 = aula0101\
	 aula0102\
	 aula0103\
	 aula0104\
	 aula0105

AULA02 = aula0202a\
	 aula0202b\
	 aula0202c\
	 aula0202d

AULA03 = aula0302a\
	 aula0302b\
	 aula0302c\
	 aula0302d

AULA04 = aula0402a\
	 aula0402b\
	 aula0402c\
	 aula0402d

AULA05 = aula0502a\
	 aula0502b\
	 aula0502c\
	 aula0502d\
	 aula0502e

AULA06 = aula0602a\
	 aula0602b\
	 aula0603a\
	 aula0603b\
	 aula0605a\
	 aula0605b\
	 aula0606a\
	 aula0606b\
	 aula0607\
	 aula0609\
	 aula0610

AULA07 = aula0702\
	 aula0704

AULA08 = aula0802\
	 aula0803\
	 aula0805\
	 aula0806\
	 aula0808\
	 aula0809\
	 aula0810\
	 aula0811


AULA0101OBJS  = aula0101.o
AULA0102OBJS  = aula0102.o
AULA0103OBJS  = aula0103.o
AULA0104OBJS  = aula0104.o
AULA0105OBJS  = aula0105.o
AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o
AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o
AULA0402AOBJS = aula0401a.o aula0402.o
AULA0402BOBJS = aula0401b.o aula0402.o
AULA0402COBJS = aula0401c.o aula0402.o
AULA0402DOBJS = aula0401d.o aula0402.o
AULA0502AOBJS = aula0501a.o aula0502.o
AULA0502BOBJS = aula0501b.o aula0502.o
AULA0502COBJS = aula0501c.o aula0502.o
AULA0502DOBJS = aula0501d.o aula0502.o
AULA0502EOBJS = aula0501e.o aula0502.o
AULA0602AOBJS = aula0601.o aula0602a.o
AULA0602BOBJS = aula0601.o aula0602b.o
AULA0603AOBJS = aula0601.o aula0603a.o
AULA0603BOBJS = aula0601.o aula0603b.o
AULA0605AOBJS = aula0604.o aula0605a.o
AULA0605BOBJS = aula0604.o aula0605b.o
AULA0606AOBJS = aula0604.o aula0606a.o
AULA0606BOBJS = aula0604.o aula0606b.o
AULA0607OBJS  = aula0601.o aula0607.o
AULA0609OBJS  = aula0608.o aula0609.o
AULA0610OBJS  = aula0608.o aula0610.o
AULA0702OBJS  = aula0701.o aula0702.o
AULA0704OBJS  = aula0703.o aula0704.o
AULA0802OBJS  = aula0801.o aula0802.o
AULA0803OBJS  = aula0801.o aula0803.o
AULA0805OBJS  = aula0804.o aula0805.o
AULA0806OBJS  = aula0804.o aula0806.o
AULA0808OBJS  = aula0807.o aula0808.o
AULA0809OBJS  = aula0809.o
AULA0810OBJS  = aula0810.o



EXECS = $(AULA01)\
	$(AULA02)\
	$(AULA03)\
	$(AULA04)\
	$(AULA05)\
	$(AULA06)\
	$(AULA07)\
	$(AUL08)

ALL = $(EXECS)\
      $(LIBS)

.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(AULA01)\
     $(AULA02)\
     $(AULA03)\
     $(AULA04)\
     $(AULA05)\
     $(AULA06)\
     $(AULA07)\
     $(AULA08)

aula01:$(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0104: $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0105: $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)
	cp $@ $@-$(OS)-$(CC)

aula02: $(AULA02)

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)
	cp $@ $@-$(OS)-$(CC)

aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)
	cp $@ $@-$(OS)-$(CC)

aula03:$(AULA03)

aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)
	cp $@ $@-$(OS)-$(CC)

aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)
	cp $@ $@-$(OS)-$(CC)

aula04: $(AULA04)
	
aula0402a: $(AULA0402AOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)
	cp $@ $@-$(OS)-$(CC)
	
aula0402b: $(AULA0402BOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)
	cp $@ $@-$(OS)-$(CC)
	
aula0402c: $(AULA0402COBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)
	cp $@ $@-$(OS)-$(CC)
	
aula0402d: $(AULA0402DOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)
	cp $@ $@-$(OS)-$(CC)

libmatematica.a: $(LIBMATEMATICAOBJS)
	$(AR) $(AFLAGS) $@ $(LIBMATEMATICAOBJS)

aula05: $(AULA05)

aula0502a: $(AULA0502AOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS) -L. -lmatematica
	cp $@ $@-$(OS)-$(CC)

aula0502b: $(AULA0502BOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS) -L. -lmatematica
	cp $@ $@-$(OS)-$(CC)

aula0502c: $(AULA0502COBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502COBJS) -L. -lmatematica
	cp $@ $@-$(OS)-$(CC)

aula0502d: $(AULA0502DOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502DOBJS) -L. -lmatematica
	cp $@ $@-$(OS)-$(CC)

aula0502e: $(AULA0502EOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502EOBJS) -lm
	cp $@ $@-$(OS)-$(CC)

aula06:$(AULA06)

aula0602a: $(AULA0602AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602AOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0602b: $(AULA0602BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602BOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0603a: $(AULA0603AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0603AOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0603b: $(AULA0603BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0603BOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0605a: $(AULA0605AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0605AOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0605b: $(AULA0605BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0605BOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0606a: $(AULA0606AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0606AOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0606b: $(AULA0606BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0606BOBJS)
	cp $@ $@-$(OS)-$(CC)

aula0607: $(AULA0607OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0607OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0609: $(AULA0609OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0609OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0610: $(AULA0610OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0610OBJS)
	cp $@ $@-$(OS)-$(CC)

aula07:$(AULA07)

aula0702: $(AULA0702OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0702OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0704: $(AULA0704OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0704OBJS)
	cp $@ $@-$(OS)-$(CC)

aula08:$(AULA08)

aula0802: $(AULA0802OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0803: $(AULA0803OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0803OBJS)
	cp $@ $@-$(OS)-$(CC)

libarquivos.a: $(LIBARQUIVOSOBJS)
	$(AR) $(AFLAGS) $@ $(LIBARQUIVOSOBJS)

aula0805: $(AULA0805OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0805OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0806: $(AULA0806OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0806OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0808: $(AULA0808OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0808OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0809: $(AULA0809OBJS) $(LIBARQUIVOS)
	$(LD) $(LFLAGS) -o $@ $(AULA0809OBJS) -L. -larquivos
	cp $@ $@-$(OS)-$(CC)

aula0810: $(AULA0810OBJS) $(LIBARQUIVOS)
	$(LD) $(LFLAGS) -o $@ $(AULA0810OBJS) -L. -larquivos
	cp $@ $@-$(OS)-$(CC)

aula0811: $(AULA0811OBJS) $(LIBARQUIVOS)
	$(LD) $(LFLAGS) -o $@ $(AULA0811OBJS) -L. -larquivos
	cp $@ $@-$(OS)-$(CC)



clean: 
	rm -f *.o $(ALL)

clean-all:
	rm -rf *.o $(ALL) *-FreeBSD-* *-Linux-*

clean-freebsd:
	rm -rf *-FreeBSD-*

clean-linux:
	rm -rf *-Linux-*

clean-objs:
	rm -rf *.o

# $RCSfile: GNUmakefile,v $
