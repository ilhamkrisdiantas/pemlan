CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = data\ mahasiswa.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: Data\ Mahasiswa.exe clean clean-after

all: Data\ Mahasiswa.exe

clean:
	$(RM) $(OBJS) Data\ Mahasiswa.exe

clean-after:
	$(RM) $(OBJS)

Data\ Mahasiswa.exe: $(OBJS)
	$(CC) -Wall -s -o '$@' $(OBJS) $(LIBS)

data\ mahasiswa.o: data\ mahasiswa.c
	$(CC) -Wall -s -c '$<' -o '$@' $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

