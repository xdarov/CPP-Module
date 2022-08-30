#include <iostream>
#include <fstream>

std::string get_file_data(char *file_name)
{
    std::string data;
    std::string buf;
    std::ifstream ifs(file_name);

    if (ifs.is_open())
    {
        while(!ifs.eof())
        {
            getline(ifs, buf);
            data += buf;
            if (!ifs.eof())
                data += "\n";
        }
    }
    else
    {
        std::cout << "ERROR OPEN FILE" << std::endl;
        exit(-1);
    }
    return data;
}

void write_file(std::string data, char *file_name)
{
    std::ofstream out(std::string(file_name) + std::string(".replace"));

    if (!out.is_open())
    {
        std::cout << "ERROR OPEN FILE" << std::endl;
        exit(-1);
    }
    out << data;
    out.close();
}

int main(int argc, char **argv)
{
    std::string data;
    std::string temp;
    int point = 0;
    int len_s1;
    int repl_index;

    if (argc == 4)
    {
        len_s1 = std::string(argv[2]).length();
        data = get_file_data(argv[1]);
        while ((int)data.substr(point).find(argv[2]) >= 0)
        {
            repl_index = (int)data.substr(point).find(argv[2]) + point;
            temp = data.substr(0, repl_index);
            temp += argv[3];
            point = temp.length();
            temp += data.substr(repl_index + len_s1);
            data = temp;
        }
        write_file(data, argv[1]);
    }
    else
    {
        std::cout << "ERROR COUNT OF ARGUMENTS" << std::endl;
        exit(-1);
    }
    return 0;
}