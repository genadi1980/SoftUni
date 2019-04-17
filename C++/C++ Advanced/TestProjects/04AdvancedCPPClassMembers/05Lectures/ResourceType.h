#ifndef RESOURCE_TYPE_H

namespace SoftUni {
	enum ResourceType {
		PRESENTATION,
		DEMO,
		VIDEO
	};

	std::ostream& operator<<(std::ostream& out, enum ResourceType t) {
		switch (t)
		{
		case ResourceType::PRESENTATION:
			out << "Presentation";
			break;
		case ResourceType::DEMO:
			out << "Demo";
		case ResourceType::VIDEO:
			out << "Video";
			break;
		default:
			out << "[unknown]";
			break;
		}

		return out;
	}
}
#define RESOURCE_TYPE_H
#endif RESOURCE_TYPE_H