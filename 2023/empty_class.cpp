class Empty
{
private:
    /* data */
public:
    Empty(/* args */);
    ~Empty();
};

Empty::Empty(/* args */)
{
}

Empty::~Empty()
{
}

int main(int argc, char const *argv[])
{
    Empty e;
    Empty* p = &e;    //  等价于 e.operator&();
    return 0;
}
