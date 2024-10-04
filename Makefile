main: main.cpp libplug.so
	g++ main.cpp -Wl,-rpath,.,-rpath,build -o build/main
	./build/main

libplug.so: src/plug.*
	g++ -fPIC -shared -Wl,-rpath,. src/plug.cpp -o build/libplug.so

win64:
	x86_64-w64-mingw32-g++ -fPIC -shared -Wl,-rpath,. src/plug.cpp -o build/libplug.dll
	x86_64-w64-mingw32-g++ main.cpp -Wl,-rpath,.,-rpath,build -o build/main
	wine ./build/main.exe

clean:
	rm build/*
