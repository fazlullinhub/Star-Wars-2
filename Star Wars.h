// Star Wars.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>
#include <string>
#include <httplib.h>
#include <nlohmann/json.hpp>
using namespace std;

class StarWarsApp {
	std::string peopleReq = "/api/people/";
	std::string planetReq = "/api/planets/";
	std::string filmReq = "/api/films/";
    httplib::Client* starClient = new httplib::Client("https://swapi.dev");
	struct  swapi_people {
		const char* name;
		const char* homeworld;
		const char* mass;
		const char* height;
		const char* hair_color;
		const char* eye_color;
		const char* birth_year;
		const char* gender;
		const char* films;
		const char* url;
		int films_count;
	};
	struct swapi_planets {
		const char* climate;
		const char* diameter;
		const char* gravity;
		const char* name;
		const char* orbital_period;
		const char* population;
		const char* url;
		const char* residents;
		int residents_count;
	};
	struct swapi_films {
		const char* director;
		int episode_id;
		const char* title;
		const char* opening_crawl;
		const char* created;
		const char* edited;
		const char* producer;
		const char* release_date;
		const char* url;
		const char* characters;
		const char* planets;
		int characters_count;
		int planets_count;
	};
};

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
