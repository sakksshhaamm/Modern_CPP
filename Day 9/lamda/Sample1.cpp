#include <iostream>

#include <algorithm>

#include <vector>

class Invoice

{

private:
    std::vector<float> iv;

    

public:
    Invoice(std::vector<float> &&i, double t)

        : iv(i), tax(t)
    {
    }

    ~Invoice()
    {

        std::cout << "Destroyed"
                  << "\n";
    };

    std::vector<float> getIv() const { return iv; }

    void setIv(const std::vector<float> &iv_) { iv = iv_; }

    double getTax() const { return tax; }

    void setTax(double tax_) { tax = tax_; }
};

int main()
{

    Invoice iv1(std::vector<float>{100.0f, 333.0f, 999.0f}, 18.0);

   double tax=iv1.getTax();
    auto data = iv1.getIv();

    // tax parents is fetched from the invoice object

    auto plusTax = [tax](float f)
    { return f * (1 + tax); };

    std::vector<double> results = {0, 0, 0};

    std::transform(

        iv1.getIv().begin(),

        iv1.getIv().end(),

        results.begin(),

        plusTax

    );
}