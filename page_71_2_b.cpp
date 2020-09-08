fstream datafile("info.dat", ios::out | ios::binary) int x = 5;

dataFile.write(&x, sizeof(x));  //error
datafile.close(&x, sizeof(int)) //fix:variable type size
    dataFile.close();