transporter: main.o people.o cargo.o bus.o train.o
	g++ -o transporter main.o people.o cargo.o bus.o train.o
main.o: main.cpp people.h cargo.h bus.h train.h itransporter.h
	g++ -c main.cpp
people.o: people.cpp people.h
	g++ -c people.cpp
cargo.o: cargo.cpp cargo.h
	g++ -c cargo.cpp
bus.o: bus.cpp bus.h people.h itransporter.h
	g++ -c bus.cpp
train.o: train.cpp train.h cargo.h itransporter.h
	g++ -c train.cpp
clean:
	rm -f *.o transporter
