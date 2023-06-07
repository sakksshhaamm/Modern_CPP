#ifndef PRODUCT_H
#define PRODUCT_H
#include "ProductCategory.h"

#include <iostream>
using namespace std;

class Product
{
public:
    Product() = delete;
    Product(const Product &) = default;
    Product(string productId, float productPrice, enum class ProductCategory productCategory) : productId{productId},
                                                                                                productPrice{productPrice},
                                                                                                productCategory{productCategory} {}

    string getProductId() const { return productId; }
    void setProductId(string productId) { this->productId = productId; }

    float getProductPrice() const { return productPrice; }
    void setProductPrice(float productPrice) { this->productPrice = productPrice; }

    friend ostream &operator<<(ostream &os, const Product &product)
    {
        os << "Product ID: " << product.productId << endl;
        os << "Product Price: " << product.productPrice << endl;

        return os;
    }

private:
    string productId;
    float productPrice;
    ProductCategory productCategory;
};

#endif // PRODUCT_H
 