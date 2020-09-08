fstream dataFile("info.dat", ios::in);  //error
fstream dataFile("info,dat", ios::out); // fix erro: it is a outfile
int y;
dataFile.seekp(10);
dataFile >> y; //error
dataFile << y; //fix error: it is used just for the output
