#ifndef RESOURCE_H
#define RESOURCE_H

#include "ResourceType.h"
#include <string>
#include <sstream>
#include <ostream>
#include <istream>

namespace SoftUni {

	class Resource {
	public:
		SoftUni::ResourceType getType() const {
			return resourceType;
		}
	private:

		int id;
		std::string link;
		SoftUni::ResourceType resourceType;

		friend std::istream& operator>>(std::istream& stream, Resource& out);
		friend std::ostream& operator<<(std::ostream& out, const Resource& r);
		friend bool operator<(const Resource& r1, const Resource& r2);
	};

	bool operator<(const Resource& r1, const Resource& r2) {
		return r1.id < r2.id;
	}

	std::ostream& operator<<(std::ostream& out, const Resource& r) {
		out << r.id << " " << r.resourceType << " " << r.link;
		return out;
	}

	std::istream& operator>>(std::istream& in, Resource& out) {
		std::string rt;
		in >> out.id >> rt >> out.link;
		SoftUni::ResourceType resourceType;
		if (rt == "Demo")
			resourceType = DEMO;
		else if (rt == "Presentation")
			resourceType = PRESENTATION;
		else if (rt == "Video")
			resourceType = VIDEO;
		out.resourceType = resourceType;
		return in;
	}
}

#endif // !RESOURCE_H 