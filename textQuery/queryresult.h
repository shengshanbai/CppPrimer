#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include <set>


class QueryResult
{
    using line_no=std::vector<std::string>::size_type;
    friend std::ostream& print(std::ostream&,const QueryResult&);
public:
    QueryResult(std::string s,std::shared_ptr<std::set<line_no>> p,std::shared_ptr<std::vector<std::string>> f):sought(s),lines(p),file(f){}
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};

#endif // QUERYRESULT_H
