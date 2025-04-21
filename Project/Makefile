all: Serbatoio.exe

%.exe: %.cpp
	g++ -g -I. $< -o $@

gdb-%: %.exe
	gdb -e $<

clean-%: %.exe
	del $<
