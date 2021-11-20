#include "person.h"
#include "transport.h"

int main() {

	Person hana = Person("±èÇÏ³ª", 10000);
	Bus bus100 = Bus(100, 1300);
	Subway line2 = Subway(2, 1200);

	hana.takeBus(bus100);
	hana.takeSubway(line2);

	hana.showInfo();
	bus100.showInfo();
	line2.showInfo();

	return 0;
}