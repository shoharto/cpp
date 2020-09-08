fstream file("info.dat", ios::out);
const int SIZE = 50; //Fix error: we should use as array size here.
char c;              //errors
char c[SIZE];        //Fix errors:we should use the array name with size of array

if (!file.fail())
{

    cout << "could not open file.\n";
}

while (eof())           //error
    while (!file.eof()) //fix error
    {
        file >> c;
        cout << c;
    }

file.close