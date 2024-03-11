#include <iostream>
#include <vector>

struct Product {
    std::string _id;
    std::string _desc;
};

/*class Store : private std::vector<Product> {
    public:
        void addProduct(const Product & product) {
            return push_back(product);
        }

        int nbProducts() {
            return size();
        }
        void print(std::ostream & os) {
            for (const Product & p : *this)
                os << p._id << " - " << p._desc << std::endl;
        } 
};*/

class Store : private std::vector<Product> {

    private:
        std::vector<Product> _data;
    public:
        void addProduct(const Product & product) {
            return _data.push_back(product);
        }

        int nbProducts() {
            return _data.size();
        }
        void print(std::ostream & os) {
            for (const Product & p : _data)
                os << p._id << " - " << p._desc << std::endl;
        } 
};







int main() {
    Store store;
    store.addProduct({"t42", "défibrillateur de tractopelle"});
    store.addProduct({"z37", "savon à bétonnière"});
    store.print(std::cout);
    std::cout << store.nbProducts() << std::endl;


    return 0;
}

