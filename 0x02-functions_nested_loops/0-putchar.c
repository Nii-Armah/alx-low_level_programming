int write(int file_desc, char* buffer, int nbytes);

int main()
{
    write(1, "_putchar\n", 9);
    return 0;
}
