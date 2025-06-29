#include <iostream>
#include <string>
#include <vector>

struct Student
{

  std::string Name;
  std::string GroupId;
  std::vector<unsigned> Ratings;
  std::vector<std::string> Subjects;

};

std::vector<Group> Groups(const std::vector<Student>&);

class Group
{

public:

  std::vector<Student> group;

  void SortByName(std::vector<Student>&);
  void SortByRating(std::vector<Student>&);
  size_t CountTwoness(const std::vector<Student>&);
  size_t CountExcellent(const std::vector<Student>&);
  std::vector<Student> VectorMathExcellent(const std::vector<Student>&);
  std::vector<std::string> GroupsId(const std::vector<Student>&);

};
