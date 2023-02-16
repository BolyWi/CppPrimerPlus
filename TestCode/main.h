#ifndef _MAIN_H_
#define _MAIN_H_

template <typename T>
class Array
{
private:
    int m_length;
    T* m_member;
public:
    Array(int l)
    {
        m_length = l;
        m_member = new T(l);
    }
    T Get(int i)
    {        
        if (i > 0 && i < m_length)
            return m_member[i];
        else
        {
            std::cout << "error" << std::endl;
            return EOF;
        }
    }
    void Set(int i, T data)
    {
        if (i > 0 && i < m_length)
            m_member[i] = data;
        else
            std::cout << "error" << std::endl;
    }

};

#endif