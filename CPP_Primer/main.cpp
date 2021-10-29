#include "Sales_data.h"

int main() {
	Sales_data total;
	if (cin >> total.bookNo >> total.revenue >> total.units_sold) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.revenue >> trans.units_sold) {
			if (total.isbn() == trans.isbn()) {
				total.revenue += trans.revenue;
				total.units_sold += trans.units_sold;
			}
			else {
				cout << total.bookNo << " " << total.revenue << " " << total.units_sold << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.revenue << " " << total.units_sold << endl;
	}
	else {
		std::cerr << "No data?!" << endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}