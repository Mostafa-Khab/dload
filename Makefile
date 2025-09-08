main: main.cpp libplug.dll
	g++ main.cpp -Wl,-rpath,.,-rpath,build -o build/main
	./build/main

libplug.dll: src/plug.*
	g++ -fPIC -shared -Wl,-rpath,. src/plug.cpp -o build/libplug.dll

win64:
	g++ -fPIC -shared -Wl,-rpath,. src/plug.cpp -o build/libplug.dll
	g++ main.cpp -Wl,-rpath,.,-rpath,build -o build/main

clean:
	rm build/*
