#ifndef PERSISTENT_VECTOR_H
#define PERSISTENT_VECTOR_H

#include <memory>
#include <stdexcept>
#include <vector>
#include <iostream>

template <typename T>
class persistent_vector {
private:
    class node { 
    public: 
        virtual ~node() {} 
        virtual void print_details() = 0;
    };
    class internal_node : public node { 
    public:
	    <FILL IN HERE>
    private:
	    <FILL IN HERE>
    };
    class leaf_node : public node { 
    public:
	    <FILL IN HERE>
    private:
	    <FILL IN HERE>
    };

public:

    //constructor
    persistent_vector(const std::vector<T>& v) {
	    <FILL IN HERE>
    }

    //copy constructor
    persistent_vector(const persistent_vector& other) {
	    <FILL IN HERE>
    }

    //copy assignment operator
    const persistent_vector& operator=(const persistent_vector& other) {
	    <FILL IN HERE>
        return *this;
    }

    const T& operator[](size_t index) const {
	    <FILL IN HERE>
	return <FILL IN HERE>;
    }

    void print_details() const {
        std::cout << "persistent_vector of " << m_size << " elements with height " << m_height << std::endl;
	if(m_size) {
	    m_head->print_details();
	}
    }

    private:
	std::shared_ptr<node> m_head;
	size_t m_size;
	size_t m_height;
};

#endif // defined PERSISTENT_VECTOR_H