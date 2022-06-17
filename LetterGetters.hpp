#ifndef LETTERGETTERS_HPP
#define LETTERGETTERS_HPP

#include "helpFunc.hpp"

struct h_getter
{
    h_getter() = default;
    char operator()();
private:
    int count = 'h';
};

char h_getter::operator()()
{
    return detail::getLetter(count);
}

struct e_getter
{
    e_getter() = default;
    char operator()();
private:
    int count = 'e';
};

char e_getter::operator()()
{
    return detail::getLetter(count);
}

struct l_getter
{
    l_getter() = default;
    char operator()();

private:
    int count = 'l';
};

char l_getter::operator()()
{
    return detail::getLetter(count);
}

struct o_getter
{
    o_getter() = default;
    char operator()();

private:
    int count = 'o';
};

char o_getter::operator()()
{
    return detail::getLetter(count);
}

struct w_getter
{
    w_getter() = default;
    char operator()();

private:
    int count = 'w';
};

char w_getter::operator()()
{
    return detail::getLetter(count);
}

struct r_getter
{
    r_getter() = default;
    char operator()();

private:
    int count = 'r';
};

char r_getter::operator()()
{
    return detail::getLetter(count);
}

struct d_getter
{
    d_getter() = default;
    char operator()();

private:
    int count = 'd';
};

char d_getter::operator()()
{
    return detail::getLetter(count);
}

struct comma_getter
{
    comma_getter() = default;
    char operator()();

private:
    int count = ',';
};

char comma_getter::operator()()
{
    return detail::getLetter(count);
}

struct space_getter
{
    space_getter() = default;
    char operator()();

private:
    int count = ' ';
};

char space_getter::operator()()
{
    return detail::getLetter(count);
}

#endif