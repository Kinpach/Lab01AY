#include "header.hpp"

void Group::SortByName() {
  
	Student pocket;
  
	for (int i = 0; i < students.size(); i++) {
		for (int j = 0; j < students.size() - 1; j++) {
			if (students[j].Name > students[j + 1].Name) {
				pocket = students[j];
				students[j] = students[j + 1];
				students[j + 1] = pocket;
			}
		}
	}
}

void Group::SortByRating}() {
  
  std::vector<double> AvgRatings;
  double pocketR = 0;
  Student pocketS;
  
  for (int i = 0; i < students.size(); i++) {
    for (int j = 0; j < students[i].Ratings.size(); j++) {
      pocketR += students[i].Ratings[j];
    }
    AvgRatings.push_back(pocketR/students[i].Ratings.size());
    pocketR = 0;
  }
  
  for (int i = 0; i < students.size(); i++) {
		for (int j = 0; j < students.size() - 1; j++) {
			if (AvgRatings[j] > AvgRatings[j + 1]) {
				pocketS = students[j];
        pocketR = AvgRatings[j];
				students[j] = students[j + 1];
				students[j + 1] = pocketR;
        AvgRatings[j] = AvgRatings[j + 1];
				AvgRatings[j + 1] = pocketR;
			}
		}
	}
  
}

size_t Group::CountTwoness() {
	size_t count = 0;

	for (int i = 0; i < students.size(); i++) {
		for (int j = 0; j < students[i].Ratings.size(); j++) {
			if (students[i].Ratings[j] == 2) {
				++count;
				break;
			}
		}
	}
	return count;
}

size_t Group::CountExcellent() {
	size_t count = 0;

	for (int i = 0; i < students.size(); ++i) {
    bool check = True;
		for (int j = 0; j < students[i].Ratings.size(); ++j) {
			if (students[i].Ratings[j] != 5) {
				check = False;
        break;
			}
		}
		if (check) {
			++count;
		}
	}
	return count;

}

std::vector<Student> Group::VectorMathExcellent() {
	std::vector<Student> res;
	for (int i = 0; i < students.size(); i++) {
		for (int j = 0; j < students[i].Subjects.size(); j++) {
			if (students[i].Subjects[j] == "Math" and students[i].Ratings[j] == 5) {
				res.push_back(students[i]);
        break;
			}
		}
	}
	return res;
}

std::vector<std::string> GroupsId() {
  
  std::set<std::string> IdList;
  std::vector<std::string> res;
  for (int i = 0; i < students.size(); i++) {
    IdList.insert(students[i].GroupId);
  }
  for (int i = 0; i < IdList.size(); i++) {
    res.push_back(Idlist[i]);
  }
  return res;
  
}
