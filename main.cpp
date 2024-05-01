#include "Star Wars.h"

using namespace std;


int main()
{
	using json = nlohmann::json;

	httplib::Client* starClient = new httplib::Client("https://swapi.dev");

	class StarWarsApp {
		void showMenu() {
			std::cout << "1 - Information about people " << std::endl;
			struct swapi_people_all {
				int count;
				const char* next;
				const char* previous;
				struct swapi_people;
				int results_count;
			};
			int choice;
			std::cout << "2 - Information about planets " << std::endl;
			struct swapi_planets_all {
				int count;
				const char* next;
				const char* previous;
				struct swapi_planets;
				int results_count;
			};
			int choice1;
			std::cout << "3 - Information about films " << std::endl;
			struct swapi_films_all {
				int count;
				const char* next;
				const char* previous;
				struct swapi_films;
				int results_count;
			};
			int choice2;
			std::string starClient;
			bool flag = true;
		}
	};
}

