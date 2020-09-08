fsteram dataFile("info.dat", ios::in);
char text[81];
dataFile.getline(text);     //error
datafile.getline(text, 81); //fix error: size of array must be used